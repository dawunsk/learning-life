#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	c = a > b ? a : b;
//	while (c % a != 0 || c % b != 0)
//	{
//		c++;
//	}
//	printf("%d", c);
//	return 0;
//}

#include<string.h>
#define N 100
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char step = 0;
		step = *left;
		*left = *right;
		*right = step;
		left++;
		right--;
	}
}
int main()
{
	char arr[N] = { 0 };
	gets_s(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
	return 0;
}
