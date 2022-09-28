#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	int count1 = 0, count2 = 0;
//	int sum1 = 0, sum2 = 0;
//	double average1 = 0, average2 = 0;
//	while ((scanf("%d", &ch) == 1) && ch != 0)
//	{
//		if (ch % 2 == 0)
//		{
//			count1++;
//			sum1 += ch;
//		}
//		else
//		{
//			count2++;
//			sum2 += ch;
//		}
//	}
//	average1 = (double)sum1 / count1;
//	average2 = (double)sum2 / count2;
//	printf("偶数平均值及个数：%lf  %d\n奇数平均值及个数：%lf  %d", average1, count1, average2, count2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	while ((n=getchar())!='#')
//	{
//		if (n == '.')
//		{
//			printf("!");
//			count++;
//		}
//		else if (n == '!')
//		{
//			printf("!!");
//			count++;
//		}
//		else
//			putchar(n);
//	}
//	printf("\n%d", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	while ((n = getchar()) != '#')
//	{
//		switch (n)
//		{
//		case'.':
//		{
//			printf("!");
//			count++;
//			break;
//		}
//		case'!':
//		{
//			printf("!!");
//			count++;
//			break;
//		}
//		default:
//		{
//			putchar(n);
//		}
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char n = 0;
//	int count = 0;
//	int flag = 0;
//	while ((n = getchar()) != '#')
//	{
//		if (n == 'e')
//		{
//			flag = 1;
//		}
//		if ((n == 'i')&&(flag ==1))
//		{
//			count++;
//			flag = 0;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//#define basic_wage 10.00
//#define over 1.50
//#define tax_300 0.15
//#define tax_450 0.20
//#define tax_over 0.25
//int main()
//{
//	int hour = 0;
//	double wage = 0;
//	double tax = 0;
//	double clean_wage = 0;
//	printf("请输入工作时间(h)：");
//	scanf("%d", &hour);
//	if (hour <= 30)
//	{
//		wage = hour * basic_wage;
//		tax = wage * tax_300;
//		clean_wage = wage - tax;
//	}
//	else if (hour <= 40)
//	{
//		wage = hour * basic_wage;
//		tax = 300 * tax_300 + (wage - 300) * tax_450;
//		clean_wage = wage - tax;
//	}
//	else
//	{
//		wage = 400 + (hour - 40) * over * basic_wage;
//		tax = 300 * tax_300 + 150 * tax_450 + (wage - 450) * tax_over;
//		clean_wage = wage - tax;
//	}
//	printf("%lf %lf %lf", wage, tax, clean_wage);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while ((scanf("%d", &n) == 1) && n > 0)
//	{
//		    printf("1");
//			for (i = 2; i <= n; i++)
//			{
//				for (j = 2; j < i; j++)
//				{
//					if (i % j == 0)
//						break;
//				}
//				if (i == j)
//				printf(" %d", i);
//			}
//	}
//	printf("非正整数请重新输入");
//	return 0;
//}
