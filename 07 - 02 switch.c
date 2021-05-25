#include <stdio.h>

void main(void)
{
	int input;
	printf("숫자를 입력하세요(1~8까지) : ");
	scanf("%d", &input);

	// break문을 사용하여 switch문을 벗어남
	switch (input)
	{
		// if(input == 1)
	case 1:
		printf("피카츄 \n");
		break;
		// else if(input == 2)
	case 2:
		printf("라이츄 \n");
		break;
	case 3:
		printf("파이리 \n");
		break;
	case 4:
		printf("꼬부기 \n");
		break;
	case 5:
		printf("버터풀 \n");
		break;
	case 6:
		printf("야도란 \n");
		break;
	case 7:
		printf("피죤투 \n");
		break;
	case 8:
		printf("또가스 \n");
		break;
		// else
	default:
		printf("잘못 입력하였습니다. \n");
		break;
	}
}