#include "permutation.h"

void swp(size_t x, size_t y)
{
	a[x]^=a[y], a[y]^=a[x], a[x]^=a[y];
}
