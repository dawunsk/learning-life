#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define LEN 5
//void show_arr(double x[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%5g", x[i]);
//	}
//}
//void copy_arr(double target1[], const double source[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		target1[i] = source[i];
//	}
//	return;
//}
//void copy_ptr(double * target2, const double * source, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*(target2 + i) = *(source + i);
//	}
//	return;
//}
//void copy_ptrs(double* target3, double* source, double* last)
//{
//	int i = 0;
//	for (i = 0; i < last-source; i++)
//	{
//		*(target3 + i) = *(source + i);
//	}
//	return;
//}
//int main()
//{
//	double source[LEN] = { 1.1,2.2,3.3,4.4,5.5 };
//	double target1[LEN] = { 0 };
//	double target2[LEN] = { 0 };
//	double target3[LEN] = { 0 };
//	printf("source:");
//	show_arr(source, LEN);
//	printf("\ntarget1:");
//	copy_arr(target1, source, LEN);
//	show_arr(target1, LEN);
//	printf("\ntarget2:");
//	copy_ptr(target2, source, LEN);
//	show_arr(target2, LEN);
//	printf("\ntarget3:");
//	copy_ptrs(target3, source, source+ LEN);
//	show_arr(target3, LEN);
//	return 0;
//}

//int findmax(int arr[], int n)
//{
//	int max = arr[1];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if(arr[i]>=max)
//		max = arr[i];
//	}
//	return max;
//}
//int main()
//{
//	int arr[5] = { 2,51,34,69,58 };
//	int max = findmax(arr, 5);
//	printf("%d", max);
//	return 0;
//}

//int findmax(double arr[5], int n)
//{
//	int max = arr[0];
//	int i = 0;
//	int index = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//			index = i;
//		}
//	}
//	return index;
//
//}
//int main()
//{
//	double arr[5] = { 1.1,2.2,5.5,3.3,4.4 };
//	int max = findmax(arr, 5);
//	printf("%d", max);
//	return 0;
//}

//double finddiff(double arr[5], int n)
//{
//	double max = arr[0];
//	double min = arr[0];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		max = arr[i] > max ? arr[i] : max;
//		min = min > arr[i] ? arr[i] : min;
//	}
//	return max-min;
//}
//int main()
//{
//	double arr[5] = { 1.1,2.2,3.3,5.5,4.4 };
//	double diff = finddiff(arr, 5);
//	printf("%lf", diff);
//	return 0;
//}
