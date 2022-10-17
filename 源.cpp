#define _CRT_SECURE_NO_WARNINGS 1
#include "标头.h"
void menu()
{
	printf("***************************\n");
	printf("********1.开始游戏*********\n");
	printf("********2.退出游戏*********\n");
	printf("***************************\n");
}
void game()
{
	char board[ROW][COL];
	InitBoard(board,ROW,COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//判断玩家是否胜利
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢!\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢!\n");
	}
	else
	{
		printf("平局!\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，请重新选择");
			break;
		}
	} while (input);
	return 0;
}