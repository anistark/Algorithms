def selectionsort():
	for i in range(n-1):
		loc=i;
		j=i+1;
		while j!=n:
			if a[j]<a[loc]:
				loc=j;
			j=j+1;
		if loc!=i:
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
	return a;

n= input('Enter the no of elements you wanna sort: ');
a=[];
for i in range(n):
	b= input();
	a.append(b);
print('Array before sorting: ');
print a;
selectionsort();
print a;