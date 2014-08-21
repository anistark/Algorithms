/* 1.7 An algorithm such that if an element in an MxN matrix is 0, its entire row and column are set to 0. */

#include <stdio.h>

int a[100][100];
int r, c, i, j;

void nulify(int p, int q){
	for (j = 0; j < c; j++){
		a[p][j]=0;
	}
	for(i=0;i<r;i++){
		a[i][q]=0;
	}
}

int main()
{
	printf("Enter the number of rows and columns in array: ");
	scanf("%d %d", &r, &c);
	printf("Enter the elements: \n");
	for(i=0;i<r;i++){
		for (j = 0; j < c; j++){
			printf("a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for (j = 0; j < c; j++){
			if(a[i][j]==0){
				nulify(i, j);
				break;
			}
		}
	}
	for(i=0;i<r;i++){
		for (j = 0; j < c; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}