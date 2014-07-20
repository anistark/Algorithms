def bubblesort():
	for i in range(n):
		swap = 1;
		if (swap == 1):
			swap= 0;
			for j in range(n-i-1):
				if a[j]>a[j+1]:
					swap=1;
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
	return a;

n= input('Enter the limit of array');
a=[];
for i in range(n):
	b= input();
	a.append(b);
print('This is The array you have created: ');
print a;
bubblesort();
print('After sorting the list is as follows: ');
print a;
