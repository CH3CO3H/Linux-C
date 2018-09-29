# BASIC

## keywords

- \_Bool
- \_Complex
- \_Imaginary
- auto
- break
- case
- char
- const
- continue
- default
- do
- double
- else
- enum
- extern
- float
- for
- goto
- if
- inline
- int
- long
- register
- restrict
- return
- short
- signed
- sizeof
- static
- struct
- switch
- typedef
- union
- unsigned
- void
- volatile
- while

## values and data

## types

| class    |class| systematic name | other name |
| -------- | --------------- | ---------- | ---- |
| integers | unsigned        | \_Bool | bool |
| | |unsigned char| |
| | |unsigned short| |
| | |unsigned int|unsigned|
| | |unsigned long| |
| | |unsigned long long| |
| |\[un]signed|char| |
| |signed|signed char| |
| | |signed short|short|
| | |signed int|singed or int|
| | |singed long|long|
| | |singed long long|long long|
|floating point|real|float||
| | |double| |
| | |long double| |
| |complex|float \_Complex|float complex|
| | |double \_Complex|double complex|
| | |long double \_Complex|long double complex|

\_Bool, unsigned char, unsigned short, char, singed char, signed short don't allow for arithmetic

some semantic arithmetic types for specialized use case:

| type      | header   | context of definition     | meaning                                      |
| --------- | -------- | ------------------------- | -------------------------------------------- |
| size_t    | sdddef.h |                           | type for "sezes" and cardinalities           |
| ptrdiff_t | stddef.h |                           | type for size differences                    |
| uintmax_t | stdint.h |                           | maximum width unsigned integer, preprocessor |
| intmax_t  | stdint.h |                           | maximum width signed integer, preprocess     |
| errno_t   | errno.h  | Appendix K                | error return instead of int                  |
| rsize_t   | seddef.h | Appendix K                | size arguments with bounds checking          |
| time_t    | time.h   | time(0), difftime(t1, t0) | calendar time in seconds since epoch         |
| clock_t   | time.h   | clock()                   | processor time                               |

size_t: \[0, SIZE_MAX]

## Specifying values

|example|name|
| ------ | ---------------------------- |
| 123    | decimal integer constant     |
| 077    | octal integer constant       |
| 0xFFFF | hexadecimal integer constant |
| 1.7E-13 | decimal floating point constants |
| 0x1.7aP-13 | hexadecimal floating point constants |
| 'a' | integer character constant |
| "hello" | string literals |

examples for constants and their types:

| constant x | value       | type        | value of -x |
| ---------- | ----------- | ----------- | ----------- |
| 2147483647 | +2147483647 | signed      | -2147483647 |
| 2147483648 | +2147483648 | singed long | -2147483648 |
| 4294967295 | +4294967295 | singed long | -4294967295 |
| 0x7FFFFFFF | +2147483647 | signed      | -2147483647 |
| 0x80000000 | +2147483648 | unsigned    | +1          |
| 1          | +1          | signed      | -1          |
| 1U         | +1          | unsigned    | +4294967295 |

## Initializers

`double c={7.8};`

`double d={0};`



## 8 C Library functions

### 8.3 String processing and conversion

Character classifiers

| name     | meaning      | C locale                                 | extended |
| -------- | ------------ | ---------------------------------------- | -------- |
| islower  | lower case   | 'a' ... 'z'                              | yes      |
| isupper  | upper case   | 'A' ... 'Z'                              | yes      |
| isbland  | bland        | ' ', '\t'                                | yes      |
| isspace  | space        | ' ', '\f', '\n', '\r', '\t', '\v'        | yes      |
| isdigit  | decimal      | '0' ... '9'                              | no       |
| isxdigit | hexadecimal  | '0' ... '9', 'a' ... 'f', 'A' ... 'F'    | no       |
| iscntrl  | control      | '\a', '\b', '\f', '\n', '\r', '\t', '\v' | yes      |
| isalnum  | alphanumeric | isalpha(x)\|\|isdigit(x)                 | yes      |
| isalpha  | alphabel     | islower(x)\|\|isupper(x)                 | yes      |
| isgraph  | graphical    | (!iscntrl(x))&&(x!=' ')                  | yes      |
| isprint  | printable    | !iscntrl(x)                              | yes      |
| ispunct  | punctuation  | isprint(x)&&!(isalnum(x)\|\|isspace(x))  | yes      |

Special character

| c      | meaning         |
| ------ | --------------- |
| '\\''  | quote           |
| '\\"'  | doublequote     |
| '\\?'  | question mark   |
| '\\\\' | backslash       |
| '\\f'  | backspace       |
| '\\f'  | form feed       |
| '\\n'  | new line        |
| '\\r'  | carriage return |
| '\\t'  | horizontal tab  |
| '\\v'  | vertical tab    |

