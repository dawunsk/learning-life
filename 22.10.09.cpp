#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//double min(double x, double y)
//{
//	return x < y ? x : y;
//}
//int main()
//{
//	double a, b;
//	double c = 0;
//	scanf("%lf %lf", &a, &b);
//	printf("������СֵΪ��%lf", min(a, b));
//	return 0;
//}

//#include<stdio.h>
//void chline(char ch, int i, int j)
//{
//	int a, b;
//	while ((scanf("%d %d", &i, &j)) == 2)
//	{
//		for (a = 1; a <= i; a++)
//		{
//			for (b = 1; b <= j; b++)
//			{
//				printf("%c", ch);
//			}
//			printf("\n");
//		}
//	}
//}
//int main()
//{
//	char ch = '#';
//	int i = 0;
//	int j = 0;
//	chline(ch, i, j);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double average(double , double);
//	double a, b;;
//	scanf("%lf %lf", &a, &b);
//	printf("����ƽ����Ϊ��%lf", average(a, b));
//	return 0;
//}
//double average(double a, double b)
//{
//	return 1/(((1/a)+(1/b))/2);
//
//}

//#include<stdio.h>
//void larger_of(double * x, double * y)
//{
//	*x = *y = *x > *y ? *x : *y;
//	return;
//}
//int main()
//{
//	double x, y;
//	while (scanf("%lf %lf", &x, &y) == 2)
//	{
//		larger_of(&x, &y);
//		printf("%lf %lf", x, y);
//	}
//	return 0;
//}

//#include<stdio.h>
//void rank(double* a, double* b, double* c)
//{
//	double mid = 0;
//	if (*a > *b)
//	{
//		mid = *b;
//		*b = *a;
//		*a = mid;
//	}
//	if (*a > *c)
//	{
//		mid = *c;
//		*c = *a;
//		*a = mid;
//	}
//	if (*b > *c)
//	{
//		mid = *c;
//		*c = *b;
//		*b = mid;
//	}
//	return;
//}
//int main()
//{
//	double a, b, c;
//	while ((scanf("%lf %lf %lf", &a, &b, &c)) == 3)
//	{
//		rank(&a, &b, &c);
//		printf("��С��������Ϊ��%lf %lf %lf", a, b, c);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//int report(int ch)
//{
//	if (isupper(ch))
//	{
//		return(ch - 'A' + 1);
//	}
//	else if (islower(ch))
//	{
//		return(ch - 'a' + 1);
//	}
//	return 0;
//	
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) !=EOF )
//	{
//		if (report(ch))
//		{
//			printf("%c %d", ch, report(ch));
//		}
//		else
//		{
//			printf("%c", ch);
//		}
//	}
//	return 0;
//}

/////////////////////

//#include<stdio.h>
//double power(double ,int);
//int main()
//{
//	double a;
//	int b;
//	while (scanf("%lf %d", &a,&b) == 2)
//	{
//		power(a, b);
//		printf("%lf %lf", a, power(a, b));
//	}
//	return 0;
//}
//double power(double a,int b)
//{
//	if (b == 0)
//	{
//		return 1;
//	}
//	if (a == 0 && b == 0)
//	{
//		
//		return 1;
//	}
//	if (a == 0)
//	{
//		printf("����δ����");
//		return 0;
//	}
//	if (b > 0)
//	{
//		return a * power(a, b - 1);
//	}
//	if (b < 0)
//	{
//		return power(a, b + 1) / a;
//	}
//}

//#include<stdio.h>
//void to_base_n(int,int);
//int main()
//{
//	int a, b;
//	while ((scanf("%d %d", &a, &b) == 2) && a > 0 && b >= 2 && b <= 10)
//	{
//		to_base_n(a, b);
//	}
//	return 0;
//}
//void to_base_n(int a, int b)
//{
//	int c = 0;
//	c = a % b;
//	if (a >= b)
//	{
//		to_base_n(a / b, b);
//	}
//	printf("%d", c);
//	return;
//}

//#include<stdio.h>
//void Fibonacci(int a);
//int main()
//{
//	int n = 0;
//	while(scanf("%d",&n)==1)
//	Fibonacci(n);
//	return 0;
//}
//void Fibonacci(int n)
//{
//	int i, x, y, t;
//	x = y = 1;
//		for (i = 1; i < n; i++)
//		{
//			t = x + y;
//			x = y;
//			y = t;
//		}
//		printf("%d", x);
//		return;
//}