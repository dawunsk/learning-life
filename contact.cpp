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
			printf("增容成功\n");
		}
		else
		{
			perror("Checkcapacity:");
			printf("增加联系人失败\n");
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
	//	printf("通讯录已满\n");
	//	return;
	//}
	Checkcapacity(pa);
	printf("请输入名字:");
	scanf("%s", pa->data[pa->sz].name);
	printf("请输入年龄:");
	scanf("%d", &(pa->data[pa->sz].age));
	printf("请输入性别:");
	scanf("%s", pa->data[pa->sz].sex);
	printf("请输入电话:");
	scanf("%s", pa->data[pa->sz].tele);
	printf("请输入地址:");
	scanf("%s", pa->data[pa->sz].addr);
	pa->sz++;
	printf("添加成功\n");
}
void PrintContact(const Contact* pa)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
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
		printf("通讯录无信息\n");
		return;
	}
	//查找
	printf("输入想要删除人的姓名:");
	scanf("%s", name);
	int pow = Find_By_Name(pa, name);
	if (pow == -1)
	{
		printf("找不到要删除的人\n");
		return;
	}
	int i = 0;
	for (i = pow; i < pa->sz - 1; i++)
	{
		pa->data[i] = pa->data[i + 1];
	}
	pa->sz--;
	printf("删除成功\n");
}
void SearchContact(Contact* pa)
{
	char name[MAX_NAME] = { 0 };
	if (pa->sz == 0)
	{
		printf("通讯录无信息\n");
		return;
	}
	printf("输入想要查找人的姓名:");
	scanf("%s", name);
	int pow = Find_By_Name(pa, name);
	if (pow == -1)
	{
		printf("找不到要查找的人\n");
	}
	else
	{
		printf("%-20s\t%-10s\t%-10s\t%-20s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
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
	printf("请输入要修改人的名字:");
	scanf("%s", name);
	int pos = Find_By_Name(pa, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pa->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pa->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pa->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pa->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pa->data[pos].addr);

		printf("修改成功\n");
	}
}