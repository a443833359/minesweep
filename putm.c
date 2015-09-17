#include "minesweep.h"

void putm(bod* b,int mine){
	srand(time(0));
	int size = b->y*b->x;
	for(int i = 0; i < mine; ++i) {
		int r=rand();
		if(!(b->data[r%size].mine)){
			b->data[r%size].mine=1;
		} else {
			--i;
		}
	}
	b->m=mine;
}