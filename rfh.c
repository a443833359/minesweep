#include "minesweep.h"

void rfh(bod* b){
	//Clear Screen
	system("cls");
	//Print ruler
	printf("  |");
	for (int i = 0; i < b->x; ++i)
	{
		printf("%d ",i+1);
	}
	printf("\n-");
	for (int i = 0; i < b->x+1; ++i)
	{
		printf("--");
	}
	for(int y = 0; y < b->y; ++y) {
		printf("\n%2d|",y+1);
		for(int x = 0; x < b->x; ++x) {
			if(b->data[y*b->x+x].open && b->data[y*b->x+x].mine) {
				printf("# ");
			}
			else if(b->data[y*b->x+x].open) {
				if(calmine(b,x,y))
					printf("%d ",calmine(b,x,y));
				else
					printf(". ");
			}
			else {
				printf("* ");
			}
		}
	}
	printf("\n");
}