#include <stdio.h>
#include <string.h>

void numpal(){
	int n, temp, reverse, rem;
	printf("Enter an integer: ");
	scanf("%d", &n);
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		reverse=reverse*10+rem;
		temp/=10;
	}  
	/* Checking if number entered by user and it's reverse number is equal. */  
	if(reverse==n)  
		printf("%d is a palindrome.\n",n);
	else
		printf("%d is not a palindrome.\n",n);
}

void spal(){
	char a[100], b[100];
	printf("Enter the string to check if it is a palindrome\n");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if( strcmp(a,b) == 0 )
		printf("Entered string is a palindrome.\n");
	else
		printf("Entered string is not a palindrome.\n");
}

int main()
{
	int a,b;
	printf("Enter 1 to check number as palindrome\n, 2 to check string as palindrome:\n");
	scanf("%d",&a);
	if(a==1){
		numpal();
	}
	else if(a==2){
		spal();
	}
	else{
		printf("Enter the correct option please\n");
	}
	return 0;
}