#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
//1.����ĳ�ʼ������ӡ����ת
void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr, sz);//��ʼ��
	Print(arr, sz);//��ӡ
	Reverse(arr, sz);
	Print(arr, sz);
	return 0;
}*/

//2.����һ���������齻��
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int temp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	return 0;
//}

//3.�󷵻���
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a=%d b=%d c=%d\n", a, b, c);//9 23 8
	return 0;
}