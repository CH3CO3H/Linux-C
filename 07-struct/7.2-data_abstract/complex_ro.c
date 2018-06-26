#include <math.h>
#include "complex_struct.h"

double real_part(struct complex_struct z)
{
	return z.x;
}

double img_part(struct complex_struct z)
{
	return z.y;
}

double mag(struct complex_struct z)
{
	return sqrt(z.x*z.x+z.y*z.y);
}

double ang(struct complex_struct z)
{
	return atan2(z.y, z.x);
}

struct complex_struct make_from_ri(double a, double b)
{
	struct complex_struct z;
	z.x=a;
	z.y=b;
	return z;
}

struct complex_struct make_from_ma(double r, double a)
{
	struct complex_struct z;
	z.x=r*cos(a);
	z.y=r*sin(a);
	return z;
}

