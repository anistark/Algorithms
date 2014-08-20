/* Remove Duplicate strings from a user input string or integer. */

#include <stdio.h>
#include <string.h>

void dupstring(){
	char a[100],b[100]={0};
	scanf("%s",a);
	int f=strlen(a);
	int i,j,k=0,count=0;
	for(i=0;i<f;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==b[j])
			{
				count=1;
			}
		}
		if(count==0)
		{
			b[k++]=a[i];
		}
		count=0;
	}
	for(j=0;j<strlen(b);j++)
	{
		printf("%c",b[j]);
	}
	printf("\n");
}

void dupint(){
	int a[100],b[100]={0};
	scanf("%s",a);
	int f=strlen(a);
	int i,j,k=0,count=0;
	for(i=0;i<f;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==b[j])
			{
				count=1;
			}
		}
		if(count==0)
		{
			b[k++]=a[i];
		}
		count=0;
	}
	for(j=0;j<strlen(b);j++)
	{
		printf("%c",b[j]);
	}
	printf("\n");
}

int main()
{
	int t;
	printf("Enter 1 for string input or 2 for integer input: ");
	scanf("%d", &t);
	if(t==1)
		dupstring();
	else if(t==2)
		dupint();
	return 0;
}