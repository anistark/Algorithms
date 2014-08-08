#include <stdio.h>
 
int main()
{
  int a[20]; 
  int d,dec,i=0;
  printf("Enter the decimal number to find its binary number\n"); 
  scanf("%d",&dec);
  d= dec;
  while(dec>0) 
  { 
       a[i]=dec%2; 
       i++; 
       dec=dec/2;
  }
  printf("Binary number of %d is = ",d); 

  for(int j=i-1;j>=0;j--) 
  {
        printf("%d",a[j]);
  }
  printf("\n");
  return 0;
}