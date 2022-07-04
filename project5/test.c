#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//以学生为例的结构体
// 法1
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s;//局部变量
//	return 0;
//}

//法2
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	//变量初始化
//	Stu s1 = { "张三",20,"12019304107","男" };//局部变量
//	Stu s2 = { "小丽",22,"12019502992","女" };
//	return 0;
//}

/*
//结构体中包含结构体
struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;
	char* pc;
};

int main()
{
	char arr[] = "hello bit\n";
	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
	printf("%s\n", t.ch);
	printf("%s\n", t.s.arr);
	printf("%lf\n", t.s.d);
	printf("%s\n", t.pc);

	return 0;
}*/

/*
//打印结构体变量
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
//函数
void Print1(Stu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("name: %s\n", tmp.tele);
	printf("sex: %s\n", tmp.sex);
}
//指针
Print2(Stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age: %d\n", ps->age);
	printf("name: %s\n", ps->tele);
	printf("sex: %s\n", ps->sex);
}

int main()
{
	//变量初始化
	Stu s = { "张三",20,"12019304107","男" };//局部变量
	//Print2更好
	Print1(s);
	Print2(&s);
	return 0;
}*/

 