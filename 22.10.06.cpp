//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>//汉诺塔问题
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
//		hanoi(n - 1, a, c, b);//将A座上的n-1个盘子借助C座移向B座
//		move(a, c);//将A座上最后一个盘子移向C座
//		hanoi(n - 1, b, a, c);//将B座上的n-1个盘子借助A座移向C座
//	}
//}
////move中的实参与hanoi函数中的形参相对应，而hanoi函数中形参a，b，c所对应的值也是在有规律的变化
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}

//#include <stdio.h>//青蛙跳台阶
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
//	printf("请输入台阶的数量：");
//	scanf("%d", &n);
//	ways = flog(n);
//	printf("青蛙有%d种跳法", ways);
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