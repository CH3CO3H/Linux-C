# types

## basic types

| class    |class| systematic name | other name | range |
| -------- | --------------- | ---------- | ---- | ---- |
| integers | unsigned        | \_Bool | bool |  |
| | |unsigned char| | [0, UCHAR_MAX] |
| | |unsigned short| | |
| | |unsigned int|unsigned||
| | |unsigned long| | [0, ULONG_MAX] |
| | |unsigned long long| | |
| |\[un]signed|char| | |
| |signed|signed char| | |
| | |signed short|short||
| | |signed int|singed or int||
| | |singed long|long||
| | |singed long long|long long||
|floating point|real|float|||
| | |double| | |
| | |long double| | |
| |complex|float \_Complex|float complex||
| | |double \_Complex|double complex||
| | |long double \_Complex|long double complex||

\_Bool, unsigned char, unsigned short, char, singed char, signed short don't allow for arithmetic

## other types

| type| header| context of definition| meaning | range |
| --- | --- | --- | --- | --- |
| size_t | sdddef.h |  | type for "sezes" and cardinalities | [0, SIZE_MAX] |
| ptrdiff_t | stddef.h |  | type for size differences    |     |
| uintmax_t | stdint.h | | maximum width unsigned integer, preprocessor | |
| intmax_t  | stdint.h |   | maximum width signed integer, preprocess     |               |
| errno_t   | errno.h  | Appendix K  | error return instead of int           |  |
| rsize_t   | seddef.h | Appendix K  | size arguments with bounds checking          |               |
| time_t    | time.h   | time(0), difftime(t1, t0) | calendar time in seconds since epoch         |  |
| clock_t   | time.h   | clock() | processor time                               |               |

