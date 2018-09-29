#include <math.h>
#include "complex_struct.h"

struct complex_struct make_from_ri(double x, double y)
{
	struct complex_struct z;
	z.t=RECTANGULAR;
	z.a=x;
	z.b=y;
	return z;
}

struct complex_struct make_from_ma(double r, double a)
{
	struct complex_struct z;
	z.t=POLAR;
	z.a=r;
	z.b=a;
	return z;
}

double real_part(struct complex_struct z)
{
	if (z.t==RECTANGULAR)
		return z.a;
	return z.a*cos(z.b);
}

double img_part(struct complex_struct z)
{
	if (z.t==RECTANGULAR)
		return z.b;
	return z.a*sin(z.b);
}

double magnitude(struct complex_struct z)
{
	if (z.t==POLAR)
		return z.a;
	return sqrt(z.a*z.a+z.b*z.b);
}

double angle(struct complex_struct z)
{
	if (z.t==POLAR)
		return z.b;
	return atan(z.b/z.a);
}

