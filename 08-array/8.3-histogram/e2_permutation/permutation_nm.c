#include "permutation.h"

void permutation_nm(size_t index) {
	if (index==M-1) {
		print_arr_m();
		for (size_t i=0;i<N-M;i++) {
			swp(M+i, index);
			print_arr_m();
			swp(M+i, index);
		}
		return;
	}
	for (size_t i=index;i<N;i++) {
		if (i!=index)
			swp(index, i);
		permutation_nm(index+1);
		if (i!=index)
			swp(index, i);
	}
}
