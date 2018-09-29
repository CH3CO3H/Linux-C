Scalar types used in this book

| level | name          | other | category  | where       | printf                 |
| ----- | ------------- | ----- | --------- | ----------- | ---------------------- |
| 0     | size_t        |       | unsigned  | <stddef.h>  | "%zu", "%zx"           |
| 0     | double        |       | floating  | builtin     | "%e", "%f", "%g", "%a" |
| 0     | signed        | int   | signed    | builtin     | "%d"                   |
| 0     | unsigned      |       | unsigned  | builtin     | "%u", "%x"             |
| 0     | bool          | _Bool | unsigned  | <stdbool.h> | "%d" as 0 or 1         |
| 1     | ptrdiff_t     |       | signed    | <stddef.h>  | "%td"                  |
| 1     | char const*   |       | string    | builtin     | "%s"                   |
| 1     | char          |       | character | builtin     | "%c"                   |
| 1     | void*         |       | pointer   | builtin     | "%p"                   |
| 2     | unsigned char |       | unsigned  | builtin     | "%hhu", "%02hhu"       |

