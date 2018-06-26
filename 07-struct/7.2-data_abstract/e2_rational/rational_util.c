#include "rational.h"

RA make_rational(int a, int b)
{
	RA r={a, b};
	return r;
}

void simp_rational(RA* x)
{
  if (x->a!=0) {
  	_Bool is_neg=false;
  	if ((x->a<0 && x->b>0) || (x->a>0 && x->b<0))
  		is_neg=true;
  	unsigned int m=fabs(x->a);
  	unsigned int n=fabs(x->b);
  	unsigned int t=gcd(m, n);
  	if (is_neg)
      x->a=-(m/t);
  	else
      x->a=m/t;
    x->b=n/t;
  }
}

RA add_rational(RA x, RA y)
{
	int b=lcm(x.b, y.b);
	int m=x.a*b/x.b;
	int n=y.a*b/y.b;
	RA r={m+n, b};
	simp_rational(&r);
	return r;
}

RA sub_rational(RA x, RA y)
{
	int b=lcm(x.b, y.b);
	int m=x.a*b/x.b;
	int n=y.a*b/y.b;
	RA r={m-n, b};
	simp_rational(&r);
	return r;
}

RA mul_rational(RA x, RA y)
{
	RA r={x.a*y.a, x.b*y.b};
	simp_rational(&r);
	return r;
}

RA div_rational(RA x, RA y)
{
	RA r={x.a*y.b, x.b*y.a};
	simp_rational(&r);
	return r;
}

void print_rational(RA x)
{
	if (x.a==0 || x.b==1)
		printf("%d\n", x.a);
	else
		printf("%d/%d\n", x.a, x.b);
}
