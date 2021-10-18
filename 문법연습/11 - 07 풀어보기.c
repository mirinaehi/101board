#include <stdio.h>

void main(void)
{
	// 정수, 문자, 8바이트부동소수 변수
	int a;
	char b;
	double c;

	// 해당 변수를 가리키는 포인터
	int* ptrA = &a;
	char* ptrB = &b;
	double* ptrC = &c;

	// 각각의 변수가 메모리에서 차지하는 크기
	printf("%d %d %d\n", sizeof(a), sizeof(b), sizeof(c));

	// 각각의 포인터 변수가 메모리에서 차지하는 크기
	printf("%d %d %d\n", sizeof(ptrA), sizeof(ptrB), sizeof(ptrC));

}
