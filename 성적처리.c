#include <stdio.h>

void main(void)
{
	int C_score;
	printf("씨언어 점수를 입력하시오 : ");
	scanf("%d", &C_score);

	if (90 <= C_score && C_score <= 100)
		printf("A");
	else if (80 <= C_score && C_score < 90)
		printf("B");
	else if (70 <= C_score && C_score < 80)
		printf("C");
	else if (60 <= C_score && C_score < 70)
		printf("D");
	else 
		printf("E");
	
	printf("\n");


	int java_score;
	printf("자바 점수를 입력하시오 : ");
	scanf("%d", &java_score);

	if (90 <= java_score && java_score <= 100)
		printf("A");
	else if (80 <= java_score && java_score < 90)
		printf("B");
	else if (70 <= java_score && java_score < 80)
		printf("C");
	else if (60 <= java_score && java_score < 70)
		printf("D");
	else
		printf("E");
	
	printf("\n");
	
	int CA_score;
	printf("컴퓨터구조 점수를 입력하시오 : ");
	scanf("%d", &CA_score);

	if (90 <= CA_score && CA_score <= 100)
		printf("A");
	else if (80 <= CA_score && CA_score < 90)
		printf("B");
	else if (70 <= CA_score && CA_score < 80)
		printf("C");
	else if (60 <= CA_score && CA_score < 70)
		printf("D");
	else
		printf("E");

	printf("\n");
	
}