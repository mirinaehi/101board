// printf 함수를 가지고 있음.
#include <stdio.h>

typedef int* p_int;

void main(void)
{
	int num = 3;

	//int* ptr = &num;
	p_int ptr = &num;

	*ptr = 4;
	printf("%d \n", num);
}
