#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void print(int arr[10][10])//杨辉三角
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10 - i; j++)
//		{
//			printf("  ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			
//			printf("%-4d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		
//		for (j = 0; j <=i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	print(arr);
//	return 0;
//}
//#include <stdio.h>//模拟qsort函数
//#include <string.h>
//struct Stu{
//	char name[20];
//	int age;
//};
//void swap(char* par, char* pbr, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = 0;
//		tmp = *par;
//		*par = *pbr;
//		*pbr = tmp;
//		par++;
//		pbr++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//走几趟
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//比较
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//交换
//			}
//		}
//	}
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void text1()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	int width = sizeof(arr[0]);
//	bubble_sort(arr, sz, width, cmp_int);
//	print(arr,sz);
//}
//int sort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void text2()
//{
//	struct Stu s[] = { {"zhangsan,25"}, {"lisi,35"},{"wangwu,30"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int width = sizeof(s[0]);
//	bubble_sort(s, sz, width, sort_by_name);
//	struct Stu* p = s;
//	for (p = s; p < &s[3]; p++)
//	{
//		printf("%s,%d ", (*p).name, (*p).age);
//	}
//}
//int main()
//{
//	text1();
//	printf("\n");
//	text2();
//	return 0;
//}