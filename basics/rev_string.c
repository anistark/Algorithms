#include <stdio.h>

void reverse()
{
	char a;
	scanf("%c", &a);
	if(a!= '\n')
	{
		reverse();
		printf("%c", a);
	}
}

int main()
{
	reverse();
	printf("\n");
	return 0;
}