/* 1.5 A basic String compression by replacing consecutive repeating characters with their corresponding number of repeation.

Input: aadrrrrggttaaaa
Output: a2d1r4g2t2a4

If the output string is bigger than the original string, then out will be the original string only. */

#include <stdio.h>
#include <string.h>

int main()
{
	char a[20], c[20];
	int l, i, cn, j;
	scanf("%s",a);
	l= strlen(a);
	c[0]=a[0];
	i=1;
	j=1;
	while(i<l){
		cn=1;
	    if(a[i] != a[i-1]){
	    	c[j] = a[i];
	    	c[j+1] = cn;
	    	j++;
	    }
	    else{
	    	while(a[i]==a[i-1]){
	    		cn++;
	    		i++;
	    		printf("1. %d\n", cn);
	    	}
		    c[j]=cn;
		    printf("2. %c\n", c[j]);
		    j++;
	    }
	    i += cn;
	}
	printf("%s\n", c);
	return 0;
}
