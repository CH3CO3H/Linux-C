#include "generics.h"

void* max(void* data[], int num, cmp_t cmp) {
	void* temp=data[0];
	for (unsigned i=1;i<num;i++)
		if (cmp(temp, data[i])<0)
			temp=data[i];
	return temp;
}
