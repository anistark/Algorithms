#include <stdio.h>
int a[20];

void selectionsort(int n)
{
	int i,j, temp, loc;
	for(i=0;i<n-1;i++)
	{
		loc=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[loc])
			{
				loc=j;
			}
		}
		if(loc!=i)
		{
			temp=a[i];
			a[i]= a[i+1];
			a[i+1]=temp;
		}
	}
}

int main()
{
	int i,n;
	printf("Enter the no of elements to be sorted");
	scanf("%d",&n);
	printf("Enter the array to be sorted");
	for(i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	selectionsort(n);
	for(i=1;i<=n;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

