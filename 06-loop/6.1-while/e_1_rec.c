void swap(int*, int*);
int max(int, int);

int euclid(int a, int b)
{
	while (a%b!=0) {
		a%=b;
		if (b>a)
			swap(&a, &b);
	}
	return b;
}

void swap(int* x, int* y)
{
	int t=*x;
	*x=*y;
	*y=t;
}

int fab(int n)
{
	int i=0;
	int x=0, y=1;
	while (i<n) {
		if (i&1==0)
			x+=y;
		else
			y+=x;
	}
	return max(x, y);
}

int max(int x, int y)
{
	return x>y?x:y;
}

