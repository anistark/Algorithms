/*
Count Inversions in an array
-----------------------------
Inversion Count for an array indicates – how far (or close) the array is from being sorted.
If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum.
Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j
Example:
The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
*/

#include <iostream>

using namespace std;

int main()
{
	int n,a[20],t;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	int c=0;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if(a[j]>a[i]){
				t = a[i];
				a[i]=a[j];
				a[j]=t;
				c++;
			}
		}
	}
	cout<<"Count : "<<c<<"\n";
	return 0;
}
