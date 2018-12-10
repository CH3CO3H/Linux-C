typedef int compare_function(void const*, void const*);
void* bsearch(void const* key, void const* base, size_t n, size_t size, compare_function* compar);
void qsort(void* base, size_t n, size_t size, compare_function* compar);

extern int compare_unsigned(void const*, void const*);
inline unsigned const* bsearch_unsigned(unsigned const key[static 1], size_t n, unsigned const base[nmeb]) {
	return bsearch(key, base, nmeb, sizeof base[0], compare_unsigned);
}

inline void qsort_unsigned(size_t n, unsigned base[nmeb]) {
	qsort(base, nmeb, sizeof base[0], compare_unsigned);
}

