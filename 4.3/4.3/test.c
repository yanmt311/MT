#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//

//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	char tmp = 0;
//
//	while (left<right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[20] = {0};
//	//scanf("%s", arr);
//	gets(arr);
//	reverse(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}
//

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 0;//�洢����õ�ÿһ��
//	scanf("%d%d", &a, &n);
//
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
//
//123

#include <math.h>
#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int sum = 0;
//		int count = 1;
//		//�ж�i�Ƿ�Ϊ��ˮ�ɻ�����
//		//1. ����i��λ��
//		int tmp = i;
//		while (tmp/=10)
//		{
//			count++;
//		}
//		//2. �õ�i��ÿһλ������ÿһλ��λ���η���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		//3. �ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// *********** 2*6-1
//  *********  2*5-1
//   *******   
//    *****
//     ***
//      *
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	//��ӡ�ϲ���
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ȴ�ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�²���2
//	for (i = 0; i < line-1; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		//�ȴ�ӡ�ո�
//		for (j = 0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	//����ָ��
//	int a = 10;
//	int* pa = &a;    //һ��ָ��
//	int** ppa = &pa; //ppa���Ƕ���ָ��
//	printf("%d\n", **ppa);
//	**ppa = 200;
//	//200
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//	return 0;
//}

//
//ָ������
//�ú���
//
//
//int main()
//{
//	//int arr[10] = {0};//�������� - �����������
//	//char ch[5] = { 0 };//�ַ����� - ����ַ�����
//	                   //ָ������ - ���ָ�루��ַ����
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//
//	int* arr2[4] = {&a, &b, &c, &d};//����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//
//	//char* arr3[5];
//	return 0;
//}

//char short int long float double - ��������
//ѧ��:����+ѧ��+����+�Ա�
//��
//���Ӷ���-��������
//C�����ṩ��һ����struct - �ṹ��ؼ���
//
//ѧ��������
//struct Stu
//{
//	//����ѧ�����������
//	char name[20];
//	char id[18];
//	short age;
//	char sex[5];
//}s2,s3,s4;//s2,s3,s4 ���Ǵ����Ľṹ�����-ȫ�ֱ���
//
//int main()
//{
//	//s1�Ǿֲ�����
//	struct Stu s1;//ѧ������s1
//
//	return 0;
//}
//
//struct S
//{
//	int a;
//	char c;
//	char arr[10];
//	double d;
//};
//
//typedef struct T
//{
//	char buf[20];
//	struct S s;
//	int *p;
//}T;
//
////typedef - ���Ͷ���- �����ض���
//
//int main()
//{
//	int a = 10;
//	//struct S s = {100, 'w', "bit", 3.14};
//	//
//	//�ṹ�����.��Ա��
//	//�ṹ��ָ��->��Ա��
//	//
//	T st = { "hello bit", {1000, 'b', "abcdef", 4.4}, &a};
//	T* pt = &st;
//	printf("%s\n", pt->buf);
//	printf("%lf\n", pt->s.d);
//
//	//printf("%s\n", st.buf);
//	//printf("%d\n", st.s.a);
//	//printf("%c\n", st.s.c);
//	//printf("%s\n", st.s.arr);
//	//printf("%lf\n", st.s.d);
//	//printf("%d\n", *(st.p));
//
//	//struct T st2;
//
//	return 0;
//}
//struct Stu
//{
//	//����ѧ�����������
//	char name[20];
//	char id[18];
//	short age;
//	char sex[5];
//};//s2,s3,s4 ���Ǵ����Ľṹ�����-ȫ�ֱ���
//
//void print1(struct Stu tmp)
//{
//	printf("%s\t%s\t%d\t%s\n", tmp.name, tmp.id, tmp.age, tmp.sex);
//}
//
//void print2(struct Stu* ps)
//{
//	printf("%s\t%s\t%d\t%s\n", ps->name, ps->id, ps->age, ps->sex);
//}
//
//int main()
//{
//	struct Stu s = {"����", "2019010305", 20, "��"};
//	print1(s);
//	print2(&s);
//
//	return 0;
//}

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}