#include "permutation.h"

void full_permutation(size_t index)
{
	if (index==N-1) {
		print_arr();
		return;
	}
	for (size_t i=index;i<N;i++) {
		if (i!=index)
			swp(index, i);
		full_permutation(index+1);
		if (i!=index)
			swp(index, i);
	}
}
