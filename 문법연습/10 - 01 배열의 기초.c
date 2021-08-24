#include <stdio.h>

void main(void)
{
	// 배열(array)을 선언과 동시에 초기화
	int arr[4] = { 10, 20, 30, 40 };
	
	// 배열의 시작주소(값)를 출력
	printf("%p\n", arr);

	// 배열의 각 요소들을 출력
	printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);

}