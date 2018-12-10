#ifndef COMPLEX_H
#define COMPLEX_H

struct complex_struct {
	double x, y;
};

/*
struct complex_struct_struct {
	double r, a;
};
*/

double real_part(struct complex_struct);
double img_part(struct complex_struct);
double mag(struct complex_struct);
double ang(struct complex_struct);
struct complex_struct make_from_ri(double, double);
struct complex_struct make_from_ma(double, double);
struct complex_struct add_complex(struct complex_struct, struct complex_struct);
struct complex_struct sub_complex(struct complex_struct, struct complex_struct);
struct complex_struct mul_complex(struct complex_struct, struct complex_struct);
struct complex_struct div_complex(struct complex_struct, struct complex_struct);
void print_complex(struct complex_struct);

#endif
