#include <stdio.h>

typedef struct {
	int x;
	int y;
}Point;

void main(void)
{
	Point a = { 3, 4 };
	Point* ptr = &a;
	
	// 구조체에서 직접접근
	printf("%d %d \n", a.x, a.y);
	
	// 포인터를 통한 간접접근
	printf("%d %d \n", (*ptr).x, (*ptr).y);
	printf("%d %d \n", ptr->x, ptr->y);

}