/**
  * This sample is about how to implement a queue in c
  *
  * Type of item is int
  * Add item to tail
  * Get item from head
  * Can get the size
  * Can display all content
  */

#include <stdio.h>
#include <stdlib.h>

/**
 * The Node struct,
 * contains item and the pointer that point to next node.
 */
typedef struct Node {
    int item;
    struct Node* next;
} Node;
/**
 * The Queue struct, contains the pointers that
 * point to first node and last node, the size of the Queue,
 * and the function pointers.
 */
typedef struct Queue {
    Node* head;
    Node* tail;

    void (*enqueue) (struct Queue*, int); // add item to tail
    // get item from head and remove it from queue
    int (*dequeue) (struct Queue*);
    // get item from head but keep it in queue
    int (*peek) (struct Queue*);
    // display all element in queue
    void (*display) (struct Queue*);
    // size of this queue
    int size;
} Queue;
/**
 * enqueue an item into queue, if this is the first item,
 * both queue->head and queue->tail will point to it,
 * otherwise the oldtail->next and tail will point to it.
 */
/*
 * enqueue an item into queue, if this is the first item,
 * both queue->head and queue->tail will point to it,
 * otherwise the oldtail->next and tail will point to it.
 */
void enqueue (Queue* queue, int item) {
    // Create a new node
    Node* n = (Node*) malloc (sizeof(Node));
    n->item = item;
    n->next = NULL;

    if (queue->head == NULL) { // no head
        queue->head = n;
    } else{
        queue->tail->next = n;
    }
    queue->tail = n;
    queue->size++;
}
/**
 * Return and remove the first item.
 */
int dequeue (Queue* queue) {
    // get the first item
    Node* head = queue->head;
    int item = head->item;
    // move head pointer to next node, decrease size
    queue->head = head->next;
    queue->size--;
    // free the memory of original head
    free(head);
    return item;
}
/**
 * Return but not remove the first item.
 */
int peek (Queue* queue) {
    Node* head = queue->head;
    return head->item;
}
/**
 * Show all items in queue.
 */
void display (Queue* queue) {
    printf("\nDisplay: ");
    // no item
    if (queue->size == 0)
        printf("No item in queue.\n");
    else { // has item(s)
        Node* head = queue->head;
        int i, size = queue->size;
        printf("%d item(s):\n", queue->size);
        for (i = 0; i < size; i++) {
            if (i > 0)
                printf(", ");
            printf("%d", head->item);
            head = head->next;
        }
    }
    printf("\n\n");
}
/**
 * Create and initiate a Queue
 */
Queue createQueue () {
    Queue queue;
    queue.size = 0;
    queue.head = NULL;
    queue.tail = NULL;
    queue.enqueue = &enqueue;
    queue.dequeue = &dequeue;
    queue.peek = &peek;
    queue.display = &display;
    return queue;
}

int main ()
{
    int i,num;
    Queue queue = createQueue();
    while(1)
    {
        printf("\nQueue Operations\n");
        printf("===============\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Peek\n");
        printf("5.Exit\n");
        printf("Enter your choice : ");
        if(scanf("%d",&i)<=0){
            printf("Enter only an Integer\n");
            exit(0);
        } else {
            switch(i)
            {
            case 1:      printf("Enter the number to insert : ");
                     scanf("%d",&num);
                     queue.enqueue(&queue, num);
                     break;
            case 2:     printf("dequeue item %d\n", queue.dequeue(&queue));
                        printf("After delete, queue: ");
                        queue.display(&queue);
                     break;
            case 3:     printf("Queue :\n");
                        queue.display(&queue);
                    break;
            case 4:     printf("peek item %d\n", queue.peek(&queue));
                        queue.display(&queue);
                    break;
            case 5:     return 0;
            default:    printf("Invalid option\n");
            }
        }
    }
    queue.display(&queue);

    printf("enqueue item 2\n");
    queue.enqueue(&queue, 2);    
    printf("enqueue item 3\n");
    queue.enqueue(&queue, 3);
    printf("enqueue item 6\n");
    queue.enqueue(&queue, 6);

    queue.display(&queue);

    printf("peek item %d\n", queue.peek(&queue));
    queue.display(&queue);

    printf("dequeue item %d\n", queue.dequeue(&queue));
    printf("dequeue item %d\n", queue.dequeue(&queue));
    queue.display(&queue);

    printf("dequeue item %d\n", queue.dequeue(&queue));
    queue.display(&queue);
    printf("enqueue item 6\n");
    queue.enqueue(&queue, 6);

    queue.display(&queue);
    return 0;
}