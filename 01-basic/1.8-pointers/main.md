# pointer

Using \* with an indetermination or null pointer has undefined behavior.

pointer difference:

```c
double A[4]={ 0.0, 1.0, 2.0, -3.0 };
double* p=&A[1];
double* q=&A[3];
assert(p-q==-2);
```

NULL could be any of the following:

| expansion                                | type               |
| ---------------------------------------- | ------------------ |
| 0U                                       | unsigned           |
| 0, '\0', enumeration constant of value 0 | signed             |
| 0UL                                      | unsigned long      |
| 0L                                       | signed long        |
| 0ULL                                     | unsigned long long |
| 0LL                                      | signed long long   |
| (void*)0                                 | void*              |

Don't use NULL.

## function pointers

