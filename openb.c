#include "minesweep.h"

int openb(bod* b,int x,int y){
	//Optional: Test opened
	b->data[y*b->x+x].open=1;
	if(b->data[y*b->x+x].mine)
		return 1;
	int j=0;
	if(!calmine(b,x,y)) {
		b->data[y*b->x+x].ropend=1;
		for(int i = -1; i <= 1; ++i) {
			if(y+i+1>0 && y+i+1<=b->y) {
				for(int j = -1; j <= 1; ++j){
					if(x+j+1>0 && x+j+1<=b->x){
						if(!b->data[(y+i)*b->x+x+j].ropend)
							openb(b,x+j,y+i);
					}
				}
			}
		}
	}

	//Winning judge
	for (int i = 0; i < b->y*b->x; ++i)
	{
		if(!b->data[i].open) {
			j++;
		}
	}
	if(j==b->m)
		return 2;
	return 0;
}