#include <stdio.h>

typedef struct rational
{
	int a;
	int b;
}RA;

RA add_rational(RA, RA);
RA sub_rational(RA, RA);
RA mul_rational(RA, RA);
RA div_rational(RA, RA);
void print_rational(RA);

int main()
{
	RA a = make_rational(1, 8); /* a=1/8 */
	RA b = make_rational(-1, 8); /* b=-1/8 */
	print_rational(add_rational(a, b));
	print_rational(sub_rational(a, b));
	print_rational(mul_rational(a, b));
	print_rational(div_rational(a, b));

	return 0;
}