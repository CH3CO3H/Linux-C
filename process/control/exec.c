#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void) {
	execlp("ps", "ps", "-o", "pid,ppid,pgrp,session,tpgid,comm", 0);
	perror("exec ps");
	exit(1);
}
