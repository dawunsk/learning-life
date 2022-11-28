#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//void InitContact(Contact* pa)
//{
//	pa->sz = 0;
//	memset(pa->data, 0, sizeof(pa->data));
//}

void InitContact(Contact* pa)
{
	pa->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (pa->data == NULL)
	{
		perror("InitContact:");
		return;
	}
	else
	{
		pa->sz = 0;
		pa->capacity = DEFAULT_SZ;
	}
}
void Checkcapacity(Contact* pa)
{
	if (pa->sz == pa->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pa->data, (pa->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pa->data = ptr;
			pa->capacity + INC_SZ;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("Checkcapacity:");
			printf("������ϵ��ʧ��\n");
			return;
		}
	}
}
void ExitContact(Contact* pa)
{
	free(pa->data);
	pa->data = NULL;
	pa->data = 0;
	pa->capacity = 0;
}
void AddContact(Contact* pa)
{
	//if (pa->sz == MAX)
	//{
	//	printf("ͨѶ¼����\n");
	//	return;
	//}
	Checkcapacity(pa);
	printf("����������:");
	scanf("%s", pa->data[pa->sz].name);
	printf("����������:");
	scanf("%d", &(pa->data[pa->sz].age));
	printf("�������Ա�:");
	scanf("%s", pa->data[pa->sz].sex);
	printf("������绰:");
	scanf("%s", pa->data[pa->sz].tele);
	printf("�������ַ:");
	scanf("%s", pa->data[pa->sz].addr);
	pa->sz++;
	printf("��ӳɹ�\n");
}
void PrintContact(const Contact* pa)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pa->sz ; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pa->data[i].name,
			pa->data[i].age,
			pa->data[i].sex,
			pa->data[i].tele,
			pa->data[i].addr );
	}
}
static int Find_By_Name(Contact* pa, char name[])
{
	int i = 0;
	for (i = 0; i < pa->sz; i++)
	{
		if (strcmp(pa->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;

}
void DELContact(Contact* pa)
{
	char name[MAX_NAME] = { 0 };
	if (pa->sz == 0)
	{
		printf("ͨѶ¼����Ϣ\n");
		return;
	}
	//����
	printf("������Ҫɾ���˵�����:");
	scanf("%s", name);
	int pow = Find_By_Name(pa, name);
	if (pow == -1)
	{
		printf("�Ҳ���Ҫɾ������\n");
		return;
	}
	int i = 0;
	for (i = pow; i < pa->sz - 1; i++)
	{
		pa->data[i] = pa->data[i + 1];
	}
	pa->sz--;
	printf("ɾ���ɹ�\n");
}
void SearchContact(Contact* pa)
{
	char name[MAX_NAME] = { 0 };
	if (pa->sz == 0)
	{
		printf("ͨѶ¼����Ϣ\n");
		return;
	}
	printf("������Ҫ�����˵�����:");
	scanf("%s", name);
	int pow = Find_By_Name(pa, name);
	if (pow == -1)
	{
		printf("�Ҳ���Ҫ���ҵ���\n");
	}
	else
	{
		printf("%-20s\t%-10s\t%-10s\t%-20s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-10d\t%-10s\t%-20s\t%-20s\n",
				pa->data[pow].name,
				pa->data[pow].age,
				pa->data[pow].sex,
				pa->data[pow].tele,
				pa->data[pow].addr);
	}
}
void ModifyContact(Contact* pa)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸��˵�����:");
	scanf("%s", name);
	int pos = Find_By_Name(pa, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	else
	{
		printf("����������:>");
		scanf("%s", pa->data[pos].name);
		printf("����������:>");
		scanf("%d", &(pa->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pa->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pa->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pa->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}
}