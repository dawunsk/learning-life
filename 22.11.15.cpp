#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d %d", &a, &n);
//	int ret = 0;
//	int sum = 0;
//	for (i = 0; i < n;i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//void my_printf(int* pr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(pr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_printf(arr, sz);
//	return 0;
//}

//#include <math.h>
//int main()//ˮ�ɻ���
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)//�ҳ�0-100000֮�����
//	{
//		int n = 1;//�ж�iΪ��λ��
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;//����ÿһλ��n�η�֮��
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <string.h>
//#include <assert.h>
//void reverse(char* pr,int n)
//{
//	assert(pr);
//	char* prend = pr + n;
//	char tmp = 0;
//	while(pr < prend)
//	{
//		tmp = *pr;
//		*pr = *prend;
//		*prend = tmp;
//		pr++;
//		prend--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdfg";
//	int n = strlen(arr) - 1;
//	reverse(arr,n);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)//��
//	{
//		int j = 0;//��ӡ�ո�
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*��
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line-1; i++)//��
//	{
//		int j = 0;//��ӡ�ո�
//		for (j = 0; j <= i ; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*��
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while (arr[left] % 2 == 1 && (left < right))
		{
			left++;
		}
		while (arr[right] % 2 == 0 && (left < right))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = 0;
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}