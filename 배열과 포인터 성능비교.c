#include <stdio.h>
#include <time.h>

void main(void)
{
	clock_t start, end;

	int arr[4] = { 0xf, 0x1f, 0x2f, 0x3f };
	int* pointer = arr;
	arr[2] = 0x4f;
	pointer[2] = 0x5f;
	start = clock();
	for (int i = 0; i < 100000000; i++)
	{
		arr[0] = 0x1f;
		arr[1] = 0x2f;
		arr[2] = 0x3f;
		arr[3] = 0x4f;
		arr[0] = 0x5f;
		arr[1] = 0x6f;
		arr[2] = 0x7f;
		arr[3] = 0x8f;
		arr[0] = 0x9f;
		arr[1] = 0xaf;
		arr[2] = 0xbf;
		arr[3] = 0xcf;
		arr[0] = 0xdf;
		arr[1] = 0xef;
		arr[2] = 0xff;
		arr[3] = 0x0f;
	}
	printf("%lf \n", (double)(clock() - start) / CLOCKS_PER_SEC);

	start = clock();
	for (int i = 0; i < 100000000; i++)
	{
		pointer[0] = 0x1f;
		pointer[1] = 0x2f;
		pointer[2] = 0x3f;
		pointer[3] = 0x4f; 
		pointer[0] = 0x5f;
		pointer[1] = 0x6f;
		pointer[2] = 0x7f;
		pointer[3] = 0x8f;
		pointer[0] = 0x9f;
		pointer[1] = 0xaf;
		pointer[2] = 0xbf;
		pointer[3] = 0xcf;
		pointer[0] = 0xdf;
		pointer[1] = 0xef;
		pointer[2] = 0xff;
		pointer[3] = 0x0f;
	}

	printf("%lf \n", (double)(clock() - start) / CLOCKS_PER_SEC);

	int* ptr = arr + 2;
	start = clock();
	for (int i = 0; i < 100000000; i++)
	{
		*ptr = 0x1f;
		*ptr = 0x2f;
		*ptr = 0x3f;
		*ptr = 0x4f;
		*ptr = 0x5f;
		*ptr = 0x6f;
		*ptr = 0x7f;
		*ptr = 0x8f;
		*ptr = 0x9f;
		*ptr = 0xaf;
		*ptr = 0xbf;
		*ptr = 0xcf;
		*ptr = 0xdf;
		*ptr = 0xef;
		*ptr = 0xff;
		*ptr = 0x0f;
	}
	printf("%lf \n", (double)(clock() - start) / CLOCKS_PER_SEC);
}