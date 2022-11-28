#define _CRT_SECURE_NO_WARNINGS 1
//创建一个能存下1000条信息的通讯录
//记录每个人都信息：姓名 年龄 性别 电话 地址
//通讯录功能：
//能增加指定人的信息
//能删除指定人的信息
//能修改指定人的信息
//能查看当前通讯录人的信息
//能排序当前通讯录人的信息

//动态存储版本：
//初始化一个能存下3条信息的通讯录
//当空间存满的时候增加两条信息
#include "contact.h"
void menu()
{
	printf("*************************************\n");
	printf("**********1.ADD    2.DEL   **********\n");
	printf("**********3.SEARCH 4.MODIFY**********\n");
	printf("**********5.SORT   6.PRINT **********\n");
	printf("**********0.EXIT           **********\n");
	printf("*************************************\n");
}
enum Option
{
	EXIT,
    ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};
int main()
{
	int input = 0;
	//创建通讯录
	Contact con;
	//初始化
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DELContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			ExitContact(&con);
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}