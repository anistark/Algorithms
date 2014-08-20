/* 1.3 Check if one string is the anagram or permutation of the other. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort(char *s)
{
	int c, d=0, len;
	char *p, *r, ch;
	len= strlen(s);
	r= (char *)malloc(len-1);
	p=s;
	for (ch='a'; ch <= 'z'; ch++)
	{
		for(c=0; c<len; c++)
		{
			if(*p == ch)
			{
				*(r+d)= *p;
				d++;
			}
			p++;
		}
		p=s;
	}
	*(r+d)= '\0';
	strcpy(s, r);
	free(r);
}

int main()
{
	char a[20], b[20];
	int i, la, lb, c=0;
	scanf("%s", a);
	la= strlen(a);
	scanf("%s", b);
	lb= strlen(b);
	if(la==lb)
	{
		sort(a);
		sort(b);
		for(i=0; i<la; i++)
		{
			if(a[i]==b[i])
			{
				c++;
			}
		}
		if(c==la)
		{
			printf("Anagram\n");
		}
		else
		{
			printf("Not Anagram\n");
		}
	}
	else
	{
		printf("Not Anagram\n");
	}
	return 0;
}