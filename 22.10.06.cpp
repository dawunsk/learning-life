//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>//��ŵ������
//
//void move(int x, int y)
//{
//	printf("%c->%c\n", x, y);
//}
//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		move(a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);//��A���ϵ�n-1�����ӽ���C������B��
//		move(a, c);//��A�������һ����������C��
//		hanoi(n - 1, b, a, c);//��B���ϵ�n-1�����ӽ���A������C��
//	}
//}
////move�е�ʵ����hanoi�����е��β����Ӧ����hanoi�������β�a��b��c����Ӧ��ֵҲ�����й��ɵı仯
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}

//#include <stdio.h>//������̨��
//
//int flog(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return flog(n - 1) + flog(n - 2);
//}
//int  main()
//{
//	int n = 0;
//	int ways = 0;
//	printf("������̨�׵�������");
//	scanf("%d", &n);
//	ways = flog(n);
//	printf("������%d������", ways);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float i = 0;
//	float sum = 0;
//	for (i = 1; i < 100; i += 2)
//	{
//		sum += (1 / i) - (1 / (i + 1));
//	}
//	printf("%f", sum);
//	return 0;
//}