## 1 basic

### compile

```
$ gcc -Wall main.c
$ c99 -Wall -o getting-started getting-started.c -lm
$ clang -Wall -lm -o getting-started getting-started.c
$ gcc -std=c99 -Wall -lm -o getting-started getting-started.c
$ icc -std=c99 -Wall -lm -o getting-started getting-started.c
```
### run

`$ ./getting-started`

### help

```
$ apropos printf
$ man printf
$ man 3 printf
```

## 3 简单函数

### 3.1 数学函数

`$ gcc main.c -lm`

## 8 数组

### 8.2 数组应用实例

`$ gcc -E main.c`

## 9 编码风格

### 9.5 indent 工具

`$ indent -kr -i8 main.c`

## 10 gdb

### 10.1 单步执行和跟踪函数调用

`$ gcc -g main.c -o main`

## 18 x86汇编程序基础

### 18.1 最简单的汇编程序

`$ as hello.s -o hello.o`

`$ ld hello.o -o hello`

### 18.5 ELF

`$ readelf -a max.o`

`$ hexdump -C max.o`

`$ objdump -d max.o`

`$ readelf -a max`

`$ objdump -d max`

## 19 汇编与C之间的关系

### 19.1 函数调用

`$ gcc main.c -g`

`$ objdump -dS a.out`

`$ gcc -S main.c`

`(gdb) disassemble`

`(gdb) si`

`(gdb) info registers`

`(gdb) x/20 $esp`

### 19.2 `main`函数和启动例程

`$ gcc -S main.c`

`$ gcc -c main.s`

`$ gcc main.o`

`$ ld /usr/lib/crt1.o /usr/lib/crti.o main.o -o main -lc -dynamic-linker /lib/ld-linux.so.2`

`$ nm /usr/lib/crt1.o`

`$ nm /usr/lib/crti.o`

`$ gcc -v main.c -o main`

## 20 链接详解

### 20.1 多目标文件的链接

`$ ld --verbose`

### 20.3 静态库

`$ gcc -print-search-dirs`

## 21 预处理

### 21.2. 宏定义

`$ gcc -E main.c`

`$ cpp main.c`

## 25 Clib

### 25.2 stdio

`$ od -tx1 -tc -Ax textfile`

## 29 FS

### 29.2 ext2

`$ dd if=/dev/zero of=fs count=256 bs=4K`

`$ mke2fs fs`

`$ sudo mount -o loop fs /mnt`

`$ od -tx1 -Ax fs`

`$ debugfs fs`

## 30 PROCESS

### 30.3 control

`(gdb) b 17`

`(gdb) set follow-fork-mode child`

`(gdb) set follow-fork-mode parent`

## 31 Shell 脚本

### 31.2 Shell 如何执行命令

`$ man bash-builtins`

`$ chmod +x script.sh`

`$ ./script.sh`

`$ /bin/sh ./script.sh`

`$ /bin/sed -f ./script.sh`

(cd ..; ls -l)

`$ source ./script.sh`

`$ . ./script.sh`

### 31.3 Shell 的基本语法

export VARNAME=value

VARNAME=value

export VARNAME

unset VARNAME

DATE=`date`

DATE=$(date)

echo \$(($VAR+3))

echo \\$SHELL

$ ls \\
\> -l

$ echo 'ABC\\
\> DE'

$ echo "\$SHELL"
/bin/bash

$ echo "\`date\`"
Sun Apr 1 16:55:13 CST 2018

## 32 Regexp

### 32.3 sed

$ sed -n '/abc/p' testfile
abc

$ sed '/abc/d' testfile
123
456

$ sed 's/bc/-&-/' testfile
123
a-bc-
456

$ sed 's/\\\(\[0-9\\]\\\)\\\(\[0-9\]\\\)/-\\1-\~\\2\~/' testfile
-1-\~2\~3
abc
-4-\~5\~6

### 32.4 awk

$ awk '{print $2;}' testfile

\$ awk '\$2\<75 {printf "%s\t%s\n", \$0, "REORDER";} \$2>=75 {print $0;}' testfile
