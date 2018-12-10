# STD IO

## file

```c
#include <stdio.h>

int remove(const char* pathname);
int rename(const char* oldpath, const char* newpath);
```

## fopen/fcolse

```c
FILE* fopen(const char* pathname, const char* mode);
FILE* fdopen(int fd, const char* mode);
FILE* freopen(const char* pathname, const char* mode, FILE* stream);
```

| mode | memo   | status          |
| ---- | ------ | --------------- |
| a    | append | position at end |
| w    | write  | truncate        |
| r    | read   |                 |

| modifier | memo   |
| -------- | ------ |
| +        | update |

```c
int fclose(FILE* stream);
```

## byte io

```c
int fgetc(FILE* stream);
char* fgets(char* s, int size, FILE* stream);
int getc(FILE* stream);
int getchar(void);
int ungetc(int c, FILE* stream);
```

## fomat io

format specifications for `printf`

`%[FF][WW][.PP][LL]SS`

| symbol| means | explain |
| --- | ---|---|
| FF   | flags | special form of conversion |
| WW   | field width | minimum width |
| PP | precision |  |
| LL | modifier | select width of type |
| SS | specifier | select conversion |

format specifiers:

| specifier | means                        | type             |
| --------- | ---------------------------- | ---------------- |
| d / i     | decimal                      | signed integer   |
| u         | decimal                      | unsigned integer |
| o         | octal                        | unsigned integer |
| x / X     | hexadecimal                  | unsigned integer |
| e / E     | \[-]d.ddd e±dd               | floating point   |
| f / F     | [-]d.ddd                     | floating point   |
| g / G     | generic e or f               | floating point   |
| a / A     | [-]0xh.hhhh p±d, hexadecimal | floating point   |
| %         | '%'                          |                  |
| c         | character                    | integer          |
| s         | characters                   | string           |
| p         | address                      | void* pointer    |

