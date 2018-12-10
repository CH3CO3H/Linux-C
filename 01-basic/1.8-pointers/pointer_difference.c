#include <stdio.h>
#include <assert.h>

int main(void) {
	double A[4]={ 0.0, 1.0, 2.0, -3.0 };
	double* p=&A[1];
	double* q=&A[3];
	assert(p-q==-2);
	return 0;
}

