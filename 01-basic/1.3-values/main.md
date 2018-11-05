# values

## Specifying values

| example    | name                                 |
| ---------- | ------------------------------------ |
| 123        | decimal integer constant             |
| 077        | octal integer constant               |
| 0xFFFF     | hexadecimal integer constant         |
| 1.7E-13    | decimal floating point constants     |
| 0x1.7aP-13 | hexadecimal floating point constants |
| 'a'        | integer character constant           |
| "hello"    | string literals                      |

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

