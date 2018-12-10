#ifndef RATIONAL_H
#define RATIONAL_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define true 1
#define false 0

typedef struct rational
{
	int a;
	int b;
}RA;

unsigned int gcd(unsigned int, unsigned int);
unsigned int lcm(unsigned int, unsigned int);
RA make_rational(int, int);
void simp_rational(RA*);
RA add_rational(RA, RA);
RA sub_rational(RA, RA);
RA mul_rational(RA, RA);
RA div_rational(RA, RA);
void print_rational(RA);

#endif
