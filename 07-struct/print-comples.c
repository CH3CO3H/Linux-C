#include <stdio.h>
#include <math.h>

typedef struct complex_struct
{
	double x, y;
}CPL;

double real_part(CPL z)
{
	return z.x;
}

double img_part(CPL z)
{
	return z.y;
}

double magnitude(CPL z)
{
	return sqrt(z.x*z.x + z.y*z.y);
}

double angle(CPL z)
{
	double const PI = acos(-1.0);
	if (z.x==0) {
		if (z.y==0)
			return 0;
		else if (z.y>0)
			return PI/2;
		else
			return -PI/2;
	} else if (z.x<0) {
		if (z.y>=0)
			return atan(z.y/z.x) + PI;
		else
			return atan(z.y/z.x) - PI;
	}
	return atan(z.y/z.x);
}

CPL make_from_real_img(double x,double y)
{
	CPL z;
	z.x = x;
	z.y = y;
	return z;
}

CPL make_from_mag_ang(double r, double a)
{
	CPL z;
	z.x = r*cos(a);
	z.y = r*sin(a);
	return z;
}

void print_cpl(CPL z)
{
	if(z.x==0&&z.y==0) {
		printf("0\n");
		return;
	} else if (z.x==0) {
		printf("%lfi\n", z.y);
		return;
	} else if (z.y==0) {
		printf("%lf\n", z.x);
		return;
	}
	printf("%lf + %lfi\n", z.x, z.y);
}

int main(int argc, char const *argv[])
{
	double a, b;
	int k;
	CPL z;

	printf("0:rect;1:plor\n");
	scanf("%d",&k);
	scanf("%lf%lf", &a, &b);
	if (k==0) {
		z = make_from_real_img(a, b);
	} else {
		z = make_from_mag_ang(a, b);
	}
	print_cpl(z);
	return 0;
}