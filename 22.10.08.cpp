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
//	printf("两者最小值为：%lf", min(a, b));
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
//	printf("调和平均数为：%lf", average(a, b));
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
//		printf("由小到大排序为：%lf %lf %lf", a, b, c);
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