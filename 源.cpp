#define _CRT_SECURE_NO_WARNINGS 1
#include "��ͷ.h"
void menu()
{
	printf("***************************\n");
	printf("********1.��ʼ��Ϸ*********\n");
	printf("********2.�˳���Ϸ*********\n");
	printf("***************************\n");
}
void game()
{
	char board[ROW][COL];
	InitBoard(board,ROW,COL);//��ʼ������
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//�ж�����Ƿ�ʤ��
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ!\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ!\n");
	}
	else
	{
		printf("ƽ��!\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
	return 0;
}