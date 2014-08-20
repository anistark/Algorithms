/* Algorithm to determine if a string has unique characters. */

#include <stdio.h>
#include <string.h>

int main()
{
	char a[20];
	int l, i, j, m=0;
	scanf("%s", a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
				m++;
				printf("%c repeated\n", a[j]);
				break;
			}
		}
	}
	if(m==0)
	{
		printf("All Unique\n");
	}
	else
	{
		printf("%d character match found\n", m);
	}
	return 0;
}