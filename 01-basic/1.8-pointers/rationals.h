#ifndef RATIONALS_H
#define RATIONALS_H 1
#include <stdbool.h>
#include "euclid.h"

typedef struct rat rat;
struct rat {
	bool sign;
	size_t num;
	size_t denom;
};

rat rat_get(long long num, unsigned long long denom);
rat rat_get_normal(rat x);
rat rat_get_extended(rat x, size_t f);
rat rat_get_prod(rat x, rat y);
rat rat_get_sum(rat x, rat y);

void rat_destory(rat* rp);
rat* rat_init(rat* rp, long long num, unsigned long long denom);
rat* rat_normalize(rat* rp);
rat* rat_extend(rat* rp, size_t f);
rat* rat_sumup(rat* rp, rat y);
rat* rat_rma(rat* rp, rat x, rat y);

#endif

