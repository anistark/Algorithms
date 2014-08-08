def insertionsort():
	i=1;
	while i!=n:
		temp= a[i];
		j=i-1;
		while(j!=-1 and temp<=a[j]):
			a[j+1]= a[j];
			j=j-1;
		a[j+1]= temp;
		i=i+1;
	return a;

n= input('Enter the no of elements in array: ');
a=[];
for i in range(n):
	b= input();
	a.append(b);
insertionsort();
print 'The sorted array: ';
print a;
