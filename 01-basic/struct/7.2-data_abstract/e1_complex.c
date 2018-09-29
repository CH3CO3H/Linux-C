#include <stdio.h>
#include <math.h>
#include "complex_struct.h"

void print_complex(struct complex_struct z)
{
	double r=real_part(z);
	double i=img_part(z);

	if (i==0) {
		printf("%f\n", r);
		return;
	}
	if (r==0) {
		printf("%fi\n", i);
		return;
	}
	if (i>0) {
		printf("%f+%fi\n", r, i);
		return;
	}
	printf("%f%fi\n", r, i);
}

int main(void)
{
	struct complex_struct z1={3.6, 2.5};
	struct complex_struct z2={5.9, -20.7};

	struct complex_struct z3=add_complex(z1, z2);
	struct complex_struct z4=sub_complex(z1, z2);
	struct complex_struct z5=mul_complex(z1, z2);
	struct complex_struct z6=div_complex(z1, z2);
	print_complex(z3);
	print_complex(z4);
	print_complex(z5);
	print_complex(z6);
	return 0;
}

