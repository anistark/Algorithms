/*
Given an array with lengths, you have to select 3 lengths (a, b and c) for a triangle such that,
it satisfies condition a+b>c,b+c>a, a+c>b.
Find the number of possible triangles can be created from the given array.
ex: 3 5 6 9 10
(3,9,10), (3 5 6), (5 6 10), (5 9 10), (5 6 9), (6 9 10)
so number of possible triangles is 6
*/

#include <iostream>

using namespace std;

int main()
{
	int a[20],n,c;
	cin>>n;
	if(n<3){
		cout<<"Please Enter an array size greater than 3.\n";
	}else{
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		c= 0;
		for (int k = 2; k < n; k++)
		{
			for (int i = 1; i < k; i++)
			{
				for (int j = 0; j < i; j++)
				{
					if(a[k]>a[i]){
						if (a[k]>a[j])
						{
							if(a[i]+a[j]>a[k]){
								c++;
							}
						}else{
							if(a[i]+a[k]>a[j]){
								c++;
							}
						}
					}
				}
			}
		}
		cout<<"Count : "<<c<<"\n";
	}
	return 0;
}
