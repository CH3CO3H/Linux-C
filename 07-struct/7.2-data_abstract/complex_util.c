#include "complex_struct.h"

struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2)
{
	return make_from_ri(real_part(z1)+real_part(z2), img_part(z1)+img_part(z2));
}

struct complex_struct sub_complex(struct complex_struct z1, struct complex_struct z2)
{
	return make_from_ri(real_part(z1)-real_part(z2), img_part(z1)-img_part(z2));
}

struct complex_struct mul_complex(struct complex_struct z1, struct complex_struct z2)
{
	return make_from_ma(mag(z1)*mag(z2), ang(z1)+ang(z2));
}

struct complex_struct div_complex(struct complex_struct z1, struct complex_struct z2)
{
	return make_from_ma(mag(z1)/mag(z2), ang(z1)-ang(z2));
}

