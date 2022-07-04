#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h> 
#include <stdlib.h>
#include <string.h>

//1.函数求二进制中1的个数(重要)
/*函数法1
int count_bit_one(unsigned int n)//加入unsigned优化(去掉符号的影响)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n/2;
	}
	return count;
}*/

/*函数法2
int count_bit_one(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}*/

/*法3 最精简
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}*/

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	//13
//	//00000000000000000000000000001101
//	//%2 /2 局限:不能算负数
//	printf("count = %d\n", count);
//	//system("pause");//库函数 - 执行系统命令 - pause(暂停)
//	return 0;
//}

/*
//2.求二进制中不同位的个数
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int get_diff_bit(int m, int n)
{
	int tmp = m ^ n;
	return count_bit_one(tmp);
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count = get_diff_bit(m, n);
	printf("count = %d\n", count);
	return 0;
}*/

/*
//3.打印二进制的奇数位和偶数位(?)
void print(int m)
{
	int i = 0;
	printf("奇数位:\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("偶数位:\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
}

int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);
	return 0;
}*/

//指针遍历数组
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf(arr, sz);
//	return 0;
//}

/*
//输入数字打印对应的乘法表
void print_table(int n)
{
	int i = 0;
	for (i = 0; i <= n; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf("%d*%d=%-3d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}*/

//4.递归实现字符串逆序(不能使用库函数)
/*非递归
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char arr[])
{
	int left = 0;
	int right = my_strlen(arr) - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}*/
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//5.递归实现非负整数的数字之和
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else 
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",&num);
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//6.递归实现n的k次方
double Pow(int n, int k)
{
	//n^k = n * n^(k-1)
	if (k < 0)
	{
		return (1.0 / (Pow(n, -k)));
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * Pow(n, k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("ret = %lf\n", ret);
	return 0;
}





























