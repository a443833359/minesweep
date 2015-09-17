#ifndef MINESWEEP_H
#define MINESWEEP_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct blk {
	int open;
	int mine;
	int ropend;
} blk;

typedef struct bod {
	blk* data;
	int x;
	int y;
	int m;
} bod;

bod* cbod(int,int,int);
void rfh(bod*);
int openb(bod*,int x,int y);
int calmine(bod* b,int x,int y);
void putm(bod* b,int mine);

#endif // MINESWEEP_H