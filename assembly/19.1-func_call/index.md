函数代码：
```c
int bar(int c, int d) {
	int e = c+d;
	return e;
}

int foo(int a, int b) {
	return bar(a, b);
}

int main(void) {
	foo(2, 3);
	return 0;
}
```
反汇编：
```
$ gcc main.c -g
$ objdump -dS a.out
...
00000000000005fa <bar>:
int bar(int c, int d) {
 5fa:	55                   	push   %rbp
 5fb:	48 89 e5             	mov    %rsp,%rbp
 5fe:	89 7d ec             	mov    %edi,-0x14(%rbp)
 601:	89 75 e8             	mov    %esi,-0x18(%rbp)
	int e = c+d;
 604:	8b 55 ec             	mov    -0x14(%rbp),%edx
 607:	8b 45 e8             	mov    -0x18(%rbp),%eax
 60a:	01 d0                	add    %edx,%eax
 60c:	89 45 fc             	mov    %eax,-0x4(%rbp)
	return e;
 60f:	8b 45 fc             	mov    -0x4(%rbp),%eax
}
 612:	5d                   	pop    %rbp
 613:	c3                   	retq   

0000000000000614 <foo>:

int foo(int a, int b) {
 614:	55                   	push   %rbp
 615:	48 89 e5             	mov    %rsp,%rbp
 618:	48 83 ec 08          	sub    $0x8,%rsp
 61c:	89 7d fc             	mov    %edi,-0x4(%rbp)
 61f:	89 75 f8             	mov    %esi,-0x8(%rbp)
	return bar(a, b);
 622:	8b 55 f8             	mov    -0x8(%rbp),%edx
 625:	8b 45 fc             	mov    -0x4(%rbp),%eax
 628:	89 d6                	mov    %edx,%esi
 62a:	89 c7                	mov    %eax,%edi
 62c:	e8 c9 ff ff ff       	callq  5fa <bar>
}
 631:	c9                   	leaveq 
 632:	c3                   	retq   

0000000000000633 <main>:

int main(void) {
 633:	55                   	push   %rbp
 634:	48 89 e5             	mov    %rsp,%rbp
	foo(2, 3);
 637:	be 03 00 00 00       	mov    $0x3,%esi
 63c:	bf 02 00 00 00       	mov    $0x2,%edi
 641:	e8 ce ff ff ff       	callq  614 <foo>
	return 0;
 646:	b8 00 00 00 00       	mov    $0x0,%eax
}
 64b:	5d                   	pop    %rbp
 64c:	c3                   	retq   
 64d:	0f 1f 00             	nopl   (%rax)
...
```
gdb 调试:
```
(gdb) start
Temporary breakpoint 1, main () at main.c:11
11		foo(2, 3);
(gdb) s
foo (a=2, b=3) at main.c:7
7		return bar(a, b);
(gdb) s
bar (c=2, d=3) at main.c:2
2		int e = c+d;
(gdb) disassemble
Dump of assembler code for function bar:
   0x00005555555545fa <+0>:	push   %rbp
   0x00005555555545fb <+1>:	mov    %rsp,%rbp
   0x00005555555545fe <+4>:	mov    %edi,-0x14(%rbp)
   0x0000555555554601 <+7>:	mov    %esi,-0x18(%rbp)
=> 0x0000555555554604 <+10>:	mov    -0x14(%rbp),%edx
   0x0000555555554607 <+13>:	mov    -0x18(%rbp),%eax
   0x000055555555460a <+16>:	add    %edx,%eax
   0x000055555555460c <+18>:	mov    %eax,-0x4(%rbp)
   0x000055555555460f <+21>:	mov    -0x4(%rbp),%eax
   0x0000555555554612 <+24>:	pop    %rbp
   0x0000555555554613 <+25>:	retq   
End of assembler dump.
(gdb) si
0x0000555555554607	2		int e = c+d;
(gdb) si
0x000055555555460a	2		int e = c+d;
(gdb) si
0x000055555555460c	2		int e = c+d;
(gdb) si
3		return e;
(gdb) si
4	}
(gdb) bt
#0  bar (c=2, d=3) at main.c:4
#1  0x0000555555554631 in foo (a=2, b=3) at main.c:7
#2  0x0000555555554646 in main () at main.c:11
(gdb) info registers
rax            0x5	5
rbx            0x0	0
rcx            0x0	0
rdx            0x2	2
rsi            0x3	3
rdi            0x2	2
rbp            0x7fffffffdd68	0x7fffffffdd68
rsp            0x7fffffffdd68	0x7fffffffdd68
r8             0x5555555546c0	93824992233152
r9             0x7ffff7de5ee0	140737351933664
r10            0x3	3
r11            0x1	1
r12            0x5555555544f0	93824992232688
r13            0x7fffffffde70	140737488346736
r14            0x0	0
r15            0x0	0
rip            0x555555554612	0x555555554612 <bar+24>
eflags         0x206	[ PF IF ]
cs             0x33	51
ss             0x2b	43
ds             0x0	0
es             0x0	0
fs             0x0	0
gs             0x0	0
(gdb) x/25 $rsp
0x7fffffffdd68:	-8832	32767	1431651889	21845
0x7fffffffdd78:	3	2	-8816	32767
0x7fffffffdd88:	1431651910	21845	1431651920	21845
0x7fffffffdd98:	-140418623	32767	262144	0
0x7fffffffdda8:	-8584	32767	-138835992	1
0x7fffffffddb8:	1431651891	21845	0	0
0x7fffffffddc8:	-1226697164
(gdb) quit
```