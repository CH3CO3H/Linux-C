int partition(int start, int end) {
	int pivot=start;
	for (int i=1;i<end-start+1;i++) {
		if (a[start+i]<a[pivot]) {
			int tmp=a[start+i];
			for (unsigned j=0;j<i;j++) {
				a[start+i-j]=a[start+i-j-1];
			}
			a[start]=tmp;
			pivot++;
		}
	}
	return pivot;
}

void quicksort(int start, int end) {
	int mid;
	if (end>start) {
		mid=partition(start, end);
		quicksort(start, mid-1);
		quicksort(mid, end);
	}
}

