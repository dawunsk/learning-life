#define _CRT_SECURE_NO_WARNINGS 1
//����һ���ܴ���1000����Ϣ��ͨѶ¼
//��¼ÿ���˶���Ϣ������ ���� �Ա� �绰 ��ַ
//ͨѶ¼���ܣ�
//������ָ���˵���Ϣ
//��ɾ��ָ���˵���Ϣ
//���޸�ָ���˵���Ϣ
//�ܲ鿴��ǰͨѶ¼�˵���Ϣ
//������ǰͨѶ¼�˵���Ϣ

//��̬�洢�汾��
//��ʼ��һ���ܴ���3����Ϣ��ͨѶ¼
//���ռ������ʱ������������Ϣ
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
	//����ͨѶ¼
	Contact con;
	//��ʼ��
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}