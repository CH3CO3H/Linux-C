## 1 程序的基本概念

### 1.4 第一个程序

`$ gcc -Wall main.c`

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

## 31 Shell 脚本

### 31.2 Shell 如何执行命令

man bash-builtins

chmod +x script.sh

./script.sh

/bin/sh ./script.sh

/bin/sed -f ./script.sh

(cd ..; ls -l)

source ./script.sh

. ./script.sh

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
