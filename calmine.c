#include "minesweep.h"

int calmine(bod* b,int x,int y){
	int mc=0;
	for(int i = -1; i <= 1; ++i) {
		if(y+i+1>0 && y+i+1<=b->y) {
			for(int j = -1; j <= 1; ++j){
				if(x+j+1>0 && x+j+1<=b->x){
					mc+=b->data[(y+i)*b->x+x+j].mine;
				}
			}
		}
	}
	return mc;
}