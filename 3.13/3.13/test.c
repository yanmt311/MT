#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define MAX 1000

//�Ա�
//����һ���Ա�ö������
//enum Sex
//{
//	//ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//����
//	//1. ���泣��
//	//300;
//	//3.14;
//	//2. const ���εĳ�����
//	//const int num = 10;
//	//num = 20;
//	//printf("num = %d\n", num);
//	//����
//	//const int n = 10;
//	//int arr[n] = {0};
//	//3. #define ����ı�ʶ������
//	//int a = MAX;
//	//printf("a = %d\n", a);
//	//4. ö�ٳ���
//	//ö��---һһ�о�
//	//�Ա��С�Ů������
//	//��ԭɫ���졢�ơ���
//
//	int num = 10;
//	enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	//"abc";//�����ַ���
//	//"";//���ַ���
//	//�ַ�������
//	//#@$%Qa
//	//a-97
//	//A-65
//	//����
//	//ASCII����
//	//
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};//
//	printf("%d\n", strlen(arr1));//strlen - string strlen - �����ַ������ȵ�
//	printf("%d\n", strlen(arr2));//���ֵ
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}

//
//int main()
//{
//	//
//	//ת���ַ�
//	//\t - ˮƽ�Ʊ��
//	//
//	//printf("c:\\test\\32\\test.c");
//	//printf("hehe\n");
//	//printf("%c", '\'');
//	//printf("%s\n", "\"");
//	//printf("\a\a\a\a\a\a\a");
//	//%c ��ӡ�ַ�
//	//%d ��ӡ����
//	//%s �ַ���
//	//%f ������
//	//%p ��ӡ��ַ
//	//printf("hello\nworld\n");
//
//	//printf("%d\n", strlen("c:\test\32\test.c"));//3
//	//printf("%c\n", '\32');//��8���Ƶ�32ת����10����������ΪASCII��ֵ������Ǹ��ַ�
//	printf("%c\n", '\x41');
//	//4*16^1+1*16^0
//	//64+1 = 65
//	//32
//	//
//	return 0;
//}
//


//int main()
//{
//	//C++ע�ͷ��
//	//�������ͱ���a,����ֵ10-ע��
//
//	//C��ע�ͷ��
//	/*
//	int a = 10;
//	*/
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)?\n");
//	scanf("%d", &input);
//	if(input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//	return 0;
//}

//
//20000 - BAT - TMD
//
//
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while(line<20000)
//	{
//		printf("�ô���:%d\n", line);
//		line++;
//	}
//	printf("��offer\n");
//	return 0;
//}

//����
//f(x,y) = x+y;
//C�����еĺ���
//Add(x, y) 
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x+y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//
//	scanf("%d%d", &num1, &num2);
//	//sum = num1+num2;//���㷽��
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	//sum = a+b;//���㷽��
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//printf("%d\n", arr[0]);
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	//int arr2[] = {1,2,3,4,5,6,7,8,9,10};
//	//1-10
//	//����-һ������-��ͬ���͵�����
//	//
//// 	int a = 1;
//// 	int b = 2;
//// 	int c = 3;
//// 	//1->10
//// 	//1-10000
//	return 0;
//}
//
//int main()
//{
//	int a = 5%2;
//	printf("%d\n", a);
//	return 0;
//}

// int main()
// {
// 	int a = 3;
// 	int b = 5;
// 	//int c = a&b;//��(2����)λ��
// 	//011
// 	//101
// 	//001
// 	//
// 	
// 	//int c = a|b;//��λ��
// 	//011
// 	//101
// 	//111
// 	//
// 	//int c = a^b;//��λ���
// 	//011
// 	//101
// 	//110
// 	//
// 	//printf("c = %d\n", c);
// 
// 	return 0;
// }
//
//
//int main()
//{
//	int a = 0;//��������-��ʼ��
//	//...
//	//a = 10;//��a��ֵ = ��ֵ������
//	a = a+1;//1
//	a += 1; //2
//
//	a = a-1;
//	a-=1;
//
//	a = a*10;
//	a *= 10;
//
//	a = a&1;
//	a &= 1;
//
//
//	return 0;
//}

int main()
{
	//int a = 10;
	//int b = 20;
	//int c = a+b;//˫Ŀ������
	//��Ŀ������-ֻ��һ��������
	//C��������α�ʾ��ٵ���?
	//0 - ��ʾ��
	//��0 - ��ʾ�� 1 -1 

	//int a = 0;
	//printf("%d\n", !a);//
	//int a = -10;
	//a = -a;
	//a = +a;
	// 	int a = 10;
	// 	printf("%d\n", sizeof(a));//4 �ֽ�
	// 	printf("%d\n", sizeof a);//4 �ֽ�
	// 
	// 	printf("%d\n", sizeof(int));//

	int arr[10] = { 0 };

	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���

	//printf("%d\n", sizeof(arr));//10*4=40
	printf("%d\n", sz);
	return 0;
}