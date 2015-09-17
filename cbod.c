#include "minesweep.h"

bod* cbod(int x,int y,int mine){
	if(x*y <= mine){
		return NULL;
	}
	bod* ret = (bod *)malloc(sizeof(bod));
	ret->x=x;
	ret->y=y;
	ret->data = (blk *)malloc(sizeof(blk) * x * y);
	memset(ret->data,0,sizeof(blk) * x * y);
	putm(ret,mine);
	return ret;
}