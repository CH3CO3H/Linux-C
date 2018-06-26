#include <math.h>
#include <complex.h>

double real_part(struct complex_struct z)
{
	return z.r*cos(z.a);
}

double img_part(struct complex_struct z)
{
	return z.r*sin(z.a);
}

double mag(struct complex_struct z)
{
	return z.r;
}

double ang(struct complex_struct z)
{
	return z.a;
}

struct complex_struct make_from_ri(double x, double y)
{
	struct complex_struct z;
	z.a=atan2(y, x);
	z.r=sqrt(x*x+y*y);
	return z;
}
struct complex_struct make_from_ma(double r, double a)
{
	struct complex_struct z;
	z.a=a;
	z.r=r;
	return z;
}

