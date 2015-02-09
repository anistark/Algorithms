/*
Next Greater Element
--------------------
Given an array, print the Next Greater Element (NGE) for every element.
The Next greater Element for an element x is the first greater element on the right side of x in array.
Elements for which no greater element exist, consider next greater element as -1.
Examples:
a) For any array, rightmost element always has next greater element as -1.
b) For an array which is sorted in decreasing order, all elements have next greater element as -1.
c) For the input array [4, 5, 2, 25}, the next greater elements for each element are as follows.

Element     NGE
4      -->   5
5      -->   25
2      -->   25
25     -->   -1

*/

#include <iostream>

using namespace std;

int main()
{
	int n,a[20],e,g;
	g=0;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	cin>>e;
	for (int i = 0; i < n; i++)
	{
		if(a[i]==e)
		{
			for (int j = i; j < n; j++)
			{
				if(a[i]<a[j]){
					g = a[j];
					break;
				}
			}
		}
	}
	if(g==0){
		g=-1;
	}
	cout<<g<<"\n";
	return 0;
}
