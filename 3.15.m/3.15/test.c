#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	//"abc";//�ַ���
//	char arr1[] = "abc";//'\0' �� ASCII��ֵ��0
//	char arr2[] = {'a', 'b', 'c'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	//printf("%d\n", strlen(arr1));
//	//printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//֪��
//
//int main()
//{
//	//int n = 10;
//	//int arr[n] = {1,2,3,4,5,6,7,8,9,10};
//	int a = 10;
//	a = -a;
//
//	return 0;
//}
//

//
//int main()
//{
//	int a = 10;
//	int arr[6] = {0};
//	//printf("%d\n", sizeof(arr));//24
//	//printf("%d\n", sizeof a);//sizeof()�������ĵ�λ���ֽ�
//	//printf("%d\n", sizeof(int));//
//	//printf("%d\n", sizeof(double));//
//
//	return 0;
//}
//

//int main()
//{
//	int a = 10;
//	//4�ֽ�-32bit
//	//00000000000000000000000000001010
//	//11111111111111111111111111110101
//	//
//	int b = ~a;
//	printf("%d\n", b);//����
//
//	//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("b=%d a=%d\n", b, a);
//
//// 	int b = a++;//����++:��ʹ�ã���++
//// 	printf("b = %d a = %d\n", b, a);
//
//	//int b = --a;//ǰ��--����--����ʹ��
//	//printf("b = %d a = %d\n", b, a);//
//// 	int b = a--;//����--����ʹ��a��ֵ����--
//// 	printf("b = %d a = %d\n", b, a);//10 9
//	return 0;
//}
//
//
//int main()
//{
//	//ǿ������ת��
//	//int a = (int)3.14;//double
//	int a = 0;
//	int b = 0;
//	if(a || b)
//		printf("hehe\n");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;//����ҵ��Ľϴ�ֵ
//	
//// 	if(a>b)
//// 		max = a;
//// 	else
//// 		max = b;
//	//����������-��Ŀ������
//	max = (a>b) ? (a) : (b);
//
//	printf("%d\n", max);
//
//	return 0;
//}


// int  main()
// {
// 	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
// 	printf("%d\n", arr[4]);
// 	//�±�����-������
// 
// 	return 0;
// }

//�������ò�����

//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú���
//	int sum = Add(a, b);//()�Ǻ������ò�����
//
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	float a;
//	return 0;
//}
// 
// int main()
// {
// 	int a = 10;//�ֲ����� - auto 
// 	return 0;
// }
// 

//typedef ����������
//typedef unsigned int u_int;
//int main()
//{
//	//����һ���������
//	unsigned int age;
//	u_int age2;
//
//	return 0;
//}
//
//
//int main()
//{
//	register int a = 0;//����aδ���ᱻƵ����������ʹ��
//	//register ���ǽ����a���ڼĴ�����
//
//	return 0;
//}
//static������
//1. ���ξֲ�����
//2. ����ȫ�ֱ���
//3. ���κ���


//
//static �ξֲ�����
//�ı��˱������������� - �䳤
//���˾ֲ���ΧҲ������
//
//void test()
//{
//	static int a = 1;//���ξֲ�����
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//
//	while(i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//

//static����ȫ�ֱ���
//�ı���ȫ�ֱ�����������-��С��
//static���ε�ȫ�ֱ���ֻ�����Լ����ڵ�.c�ļ���ʹ�ã�����������Դ�ļ���ʹ��


//����һ��ȫ�ֱ���
//extern �� �����ⲿ���ŵ�
//extern int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}

//static���κ���
//�ı��˺�����������
//��������εĺ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ�����ʹ��


//��������
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//strlen �� sizeof��ʲô����

//1. ���Ǿ�û��ʲô����
//2. strlen()��һ���⺯����ֻ���������ַ����ĳ��ȣ����ַ����Ŀ�ʼλ��������ַ��ĸ�����
//   ֱ��'\0',�����в�����'\0'��
//3. sizeof()�ǲ�����,����������ĳ������������͵Ĵ�С�ģ���λ���ֽ�
//int a = 10;
//int arr[10] = {0};
//sizeof(a) sizeof(int) sizeof(arr)
//


//#define ���峣��
// #define MAX 10
// 
// int main()
// {
// 	int a = MAX;
// 	printf("%d\n", a);
// 	return 0;
// }

//#define �����
//
//int Max(int x, int y)
//{
//	//��Ŀ������/����������
//	return (x>y ? x:y);
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ķ�ʽ
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//
//	//��ķ�ʽ
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	
//	return 0;
//}
//10����
//0-9
//16����
//0 1 2 3 4 5 6 7 8 9 a b c d e f
//
//int main()
//{
//	int a = 10;//�������ͱ���a�����Ҹ�ֵ10
//	//Ҫ�洢10
//	//Ҫ���ڴ�ռ�
//	//a�ڴ�����ʱ�����ڴ��������ĸ��ӽڵĿռ�
//	//printf("%p\n", &a); //& ȡ��ַ������
//	int* p = &a;//p��ָ�����
//
//	printf("%p\n", p);
//	printf("%p\n", &a);
//
//	//%p �Ե�ַ����ʽ���д�ӡ
//
//	return 0;
//}
//
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'w';
//	printf("%c\n", ch);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//*-�����ò����� *pa ���� a
//	printf("%d\n", a);//20
//	return 0;
//}

int main()
{
	char ch = 'a';
	int a = 10;
	char*pc = &ch;
	int*pa = &a;

	printf("%d\n", sizeof(pc));//
	printf("%d\n", sizeof(pa));//

	return 0;
}