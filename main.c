#include "minesweep.h"

int main(int argc, char const *argv[])
{
	int xm,ym,mine;
	bod* b;
	if(argc!=4) {
		scanf("%d %d %d",&xm,&ym,&mine);
	}
	else {
		xm=atoi(argv[1]);
		ym=atoi(argv[2]);
		mine=atoi(argv[3]);
	}
	if(!(b = cbod(xm,ym,mine))){
		printf("Bad parameters.\n");
		exit(1);
	}
	rfh(b);
	int x,y,stop=0;
	while(!stop) {
		scanf("%d %d",&x,&y);
		stop=openb(b,x-1,y-1);
		rfh(b);
	}
	if(stop==2){
		printf("\nYou win!\n");
	} else {
		for (int i = 0; i < b->x*b->y; ++i)
		{
			b->data[i].open=1;
		}
		rfh(b);
		printf("\nBoom!\n");
	}
	getchar();
	getchar();
	return 0;
}