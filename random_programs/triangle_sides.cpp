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
	int a[20],n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout <<a[i]<<" ";
	}
	return 0;
}
