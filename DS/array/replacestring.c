/* 1.4 Replace all space in the array with '%20'

Input: My name is John     
Output: My%20name%20is%20John  

Assumption: There are enough empty character spaces at the end of the array to accomodate enough '%20' */

#include <stdio.h>
#include <string.h>

int main()
{
	char a[20], r[20];
	int l, i, j;
	gets(a);
	l= strlen(a);
	for(i=0, j=0; j<l-1; i++){
	    if(a[i] != ' ')
	      r[j] = a[i];
	    else{
	      r[j] = '%';
	      r[j+1] = '2';
	      r[j+2] = '0';
	      j += 2;
	    }
	    j++;
	}
	printf("%s\n", r);
	return 0;
}