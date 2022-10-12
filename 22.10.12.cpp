#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//int search(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (mid < key)
//		{
//			left = mid + 1;
//		}
//		else if (mid > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = search(arr, key, sz);
//	if (ret == -1)
//	{
//		printf("没找到");
//	}
//	else
//		printf("找到了：下标是：%d", ret);
//	return 0;
//}