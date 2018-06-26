#include <stdio.h>

#define true 1
#define false 0
#define MAX_ROW 5
#define MAX_COL 5

struct point {unsigned char row, col;};

unsigned char maze[MAX_ROW][MAX_COL]={
	0,1,0,0,0,
	0,1,0,1,0,
	0,0,0,0,0,
	0,1,1,1,0,
	0,0,0,1,0,
};

_Bool visit(unsigned char x, unsigned char y) {
	if (x==MAX_ROW-1 && y==MAX_COL-1) {
		return true;
	}
	if (x+1<MAX_ROW && maze[x+1][y]==0)
		if (visit(x+1, y)) {
			printf("(%d, %d)\n", x+1, y);
			return true;
		}
	if (y+1<MAX_COL && maze[x][y+1]==0)
		if (visit(x, y+1)) {
			printf("(%d, %d)\n", x, y+1);
			return true;
		}
	if (x-1<MAX_ROW && maze[x-1][y]==0)
		if (visit(x-1, y)) {
			printf("(%d, %d)\n", x-1, y);
			return true;
		}
	if (y-1<MAX_COL && maze[x][y-1]==0)
		if (visit(x, y-1)) {
			printf("(%d, %d)\n", x, y-1);
			return true;
		}
	return false;
}

int main(void) {
	if (visit(0, 0))
		puts("Yes");
	else
		puts("No");
	return 0;
}

