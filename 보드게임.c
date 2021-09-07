﻿
/*
*	z : 549 507 6524
*	보드게임
*	총 40칸
*	플레이의 속성
*		1. 돈 : 20,000,000 시작
*		2. 현재위치 : 0부터 시작
		3. 황금열쇠
			원하는 곳 갈수 있음
			돈을 랜덤하게 준다( -5억 ~ +5억 )
			TODO : 돈을뺏는다
	주사위 1 ~ 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int throw_dice_printed(void)
{
	int dice;
	dice = rand() % 6 + 1;
	printf("주사위를 던져서 %d(이)가 나왔습니다.\n", dice);
	return dice;
}

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void print_map(int position, int money)
{
	gotoxy(0, 0);
	printf("#########################################\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");
	printf("|   |   |   |   |   |   |   |   |   |   |\n");
	printf("#########################################\n");
	printf("현재위치 : %d, 현재금액 : %d \n\n", position, money);
	gotoxy(position % 10 * 4 + 2, 1 + position / 10);
	printf("*");
}



void main(void)
{
	// 플레이어의 위치(0부터 시작)
	int position = 0;
	// 주사위
	int dice;
	// 공간의 끝 점
	const int finish = 60;
	// 돈은 2천만부터 시작
	int money = 20000000;

	srand(time(0));
	
	print_map(position, money);

	// 무한반복
	while (1)
	{
		//엔터키를 눌러서 진행시켜
		getchar();
		system("cls");
		/* 던짐 */
		// 주사위는 1 ~ 6까지 나오게 설정
		gotoxy(0, 10);
		int dice = throw_dice_printed();
		
		// 던진 주사위값을 현재 위치에 적용
		position += dice;

		// TEST CODE
		//position = 10;

		gotoxy(0, 10);
		switch (position)
		{
			// TODO : printf 중복된 코드 제거하기
		case 10:
			printf("*위치 10*에 있을때 주사위를 다시 던집니다. \n");
			getchar();
			int dice_money = rand() % 6 + 1;
			money += 100000 * dice_money;
			printf("주사위가 %d이(가) 나와서 %d원을 획득하였습니다. \n", dice_money, 100000 * dice_money);
			break;

		case 20:
			printf("기부천사 - *위치 20*에 있을때 재산의 20%%를 사회에 기부합니다. \n");
			money = (int)(money * 0.8);
			break;

		case 30:
			printf("*위치 30*에 있을때, 주사위 던진만큼 더 나아갑니다.\n");
			position += dice;
			break;

			// 3턴동안 움직이지 못함
		case 49:
			printf("*위치 49*에 있을때, 3턴동안 움직일 수 없습니다.\n");
			for (int i = 1; i <= 3; i++)
			{
				getchar();
				printf("%d 턴입니다.\n", i);
				int exit_dice = throw_dice_printed();

				// 주사위를 던져서 3이 나오면 무인도를 탈출
				if (exit_dice == 3)
				{
					printf("축하합니다 %d이(가) 나왔습니다.", exit_dice);
					break;
				}
			}
			printf("무인도를 탈출하였습니다. \n");
			printf("현재위치 : %d, 현재금액 : %d \n\n", position, money);
			break;

		case 59:
			printf("*위치 59*에 있을때, 처음 지점으로 돌아갑니다.\n");
			position = 0;
			break;
		}

		print_map(position, money);
		gotoxy(0, 10);

		if (position == finish)
		{
			printf("끝 점에 있을때, 금액이 2배가 됩니다.\n");
			money *= 2;
		}

		// 범위를 지정해야 하는 조건에는 switch문이 불가능하다
		if (position > finish)
		{
			printf("축하합니다. 목적지에 도착하셨습니다.\n");
			break;
		}
	}
}
