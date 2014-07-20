#include<stdio.h>

void bubblesort(int p[],int n)
{
	int temp,i,j;
	int swap=1;
	for(i=0;i<n&&swap==1;i++)
	{
		swap=0;
		for(j=0;j<n-i;j++)
		{
			if(p[j]>p[j+1])
			{
				swap=1;
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}

int main()
{
	int a[20];
	printf("\nEnter the limit of array");
	int lim;
	scanf("\n %d",&lim);
	//int a[lim];
	int i;
	for(i=0;i<lim;i++)
	{
		printf("\nEnter Value");
		scanf("\n %d",&a[i]);
	}
	printf("\nThis is The array you have created\n");
	for(i=0;i<lim;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n Starting to sort your array via bubble sorting ");
	bubblesort(a,lim);
	printf("\nAfter sorting the list is as follows:");
	for(i=0;i<=lim;i++)
	{
		printf("\n%d",a[i]);
	}
return(0);
}
