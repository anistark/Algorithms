/* 1.5 A basic String compression by replacing consecutive repeating characters with their corresponding number of repeation.

Input: aadrrrrggttaaaa
Output: a2d1r4g2t2a4

If the output string is bigger than the original string, then out will be the original string only. */

#include <stdio.h>
#include <string.h>

char str[100];
int length;

//recursive code - prefered
void compress(char *str,int len, int act) {
	if(len<length) {
	    int k=len;
	    int count=0;
	    int c, n;
	    while(str[k]==str[len]){
	        len++; count++;
	    }
	    n = 0;
	    c=count;
	    do {
	        c /= 10;
	        n++;
	    } while (c != 0);
	    compress(str,len,act+n+1);
	    str[act]=str[k];
	    if(k+count==length) 
	       str[act+n+1]='\0';
	    for(c=0;c<n;c++) {
	        str[act+n-c]=(count%10)+48;
	        count=count/10;
	    }
	}
	return;
}

int main()
{
	scanf("%s",str);
	length=strlen(str);
	compress(str,0,0);
	printf("%s\n",str);
	return 0;
}

