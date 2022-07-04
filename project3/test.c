 #define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//指针遍历数组
//int main()
//{
//	//从前往后遍历
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = arr;
//	///*for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p++;
//	//}*/
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p += 2;
//	//}
//
//	//从后往前遍历
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p -= 2;
//	}
//	return 0;
//}

//int main()
//{
//	//指针减指针得到的是中间的元素个数
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}

/*
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

//指针-指针模拟实现strlen
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}*/

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	//int*** pppa = &ppa;
//	return 0;
//}

//指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}