#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��ѧ��Ϊ���Ľṹ��
// ��1
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s;//�ֲ�����
//	return 0;
//}

//��2
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	//������ʼ��
//	Stu s1 = { "����",20,"12019304107","��" };//�ֲ�����
//	Stu s2 = { "С��",22,"12019502992","Ů" };
//	return 0;
//}

/*
//�ṹ���а����ṹ��
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
//��ӡ�ṹ�����
typedef struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
//����
void Print1(Stu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("name: %s\n", tmp.tele);
	printf("sex: %s\n", tmp.sex);
}
//ָ��
Print2(Stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age: %d\n", ps->age);
	printf("name: %s\n", ps->tele);
	printf("sex: %s\n", ps->sex);
}

int main()
{
	//������ʼ��
	Stu s = { "����",20,"12019304107","��" };//�ֲ�����
	//Print2����
	Print1(s);
	Print2(&s);
	return 0;
}*/

 