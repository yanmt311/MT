#define _CRT_SECURE_NO_WARNINGS 1

//дһ���������ز���������(����)�� 1 �ĸ�����
#include <stdio.h>
//
//int NumberOf1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//


//int NumberOf1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//
//13&1  == 1
//00000000000000000000000000001100
//00000000000000000000000000000001
//00000000000000000000000000000000
//
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//
//	//13
//	//00000000000000000000000000001101 - 32bit
//	//6 - 110
//	//3 - 11
//	//1 - 1
//	//0
//	int ret = NumberOf1(num);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//


//n = 13
//n = n&(n-1)
//1101 - n
//1100 - n-1
//1100 - n
//1011 - n-1
//1000 - n

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int tmp = m^n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	//10
//	//00000000000000000000000000001010
//	//
//	int i = 0;
//	//��ӡ����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//ָ�����
//	return 0;
//}
//
//int main()
//{
//	char ch = 'w';
//	int a = 10;
//	double d = 10.0;
//
//	char* pc = &ch;
//	int* pa = &a;
//	double* pd = &d;
//
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pd));
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	char* pa = &a;
//	*pa = 0;
//	return 0;
//}
//ָ���������������
//1. ָ�����;�����ָ����н����ò����ķ��ʶ��ռ�
//char* ָ�룬�����ò���������1���ֽ� int* ָ������÷���4���ֽ� 
//2. ָ�����;�����ָ��+1���������ٸ��ֽ�(��һ�����߶�����)
//char* ָ��+1�������1���ֽ�
//int* ָ��+1�������4���ֽ�
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char*pc = &a;
//	
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//pa ��int* ��ָ�룬+1��������1�����Σ�4���ֽڣ�����˼��ʵ���ϼ���4
//
//	printf("%p\n", pc);//pc ��char* ��ָ�룬+1��������1���ַ���1���ֽڣ�����˼��ʵ���ϼ���1
//	printf("%p\n", pc+1);
//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 
//		0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344 };
//	int i = 0;
//	char* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	/*int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}*/
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 0;//�ֲ�����-���ֵ
//	//printf("%d\n", a);
//	//a++;
//
//	int *p;//Ұָ��
//	*p = 20;
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = 0;
//		p++;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int *p = test();
//	*p = 20;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int *p = &a;//��ʼ��
//	int* p2 = NULL;//��֪����p2ָ������
//	//ʹ��p������a
//	//...
//	p = NULL;
//	if (p != NULL)
//		*p = 0;
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &arr[0] - &arr[9]);//��ַ-��ַ  --> ָ��-ָ��
//	//ָ��-ָ�� �ľ���ֵ �� �����ָ���ָ��֮��Ԫ�صĸ���
//	//ǰ�᣺����ָ��ָ��ͬһ��ռ�
//
//	return 0;
//}
#include <string.h>
//���ַ���ʵ����strlen:1,��������2,�ݹ�,3,ָ��-ָ��
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	int len = my_strlen("abc");
//	//[a][b][c][\0]
//	printf("%d\n", len);
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//int*
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//int*
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//? - ����ָ������
//	printf("%p\n", &arr+1);
//
//
//	//��������������Ԫ�صĵ�ַ
//	//�������������⣺
//	//a. sizeof(������)�����������������ʾ�������飬sizeof(������)���������������Ĵ�С
//	//b. &�����������������������ʾ�������飬&������ ȡ��������������ĵ�ַ
//	//
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < 10; i++)
	{
		//printf("%d ", i[arr]); 
		printf("%d ", arr[i]); //arr[i] ==> *(arr+i)
	}

	//�������ͨ��ָ��������
	//
	//for (i = 0; i < sz; i++)
	//{
	//	//printf("%p ---- %p\n", p + i, &arr[i]);
	//	*(p + i) = i+1;
	//}
	//for (i = 0; i < sz; i++)
	//{
	//	//printf("%d ", *(p + i));  //*(arr+i)  arr[i]   p[i]
	//	//printf("%d ", p[i]);//   i[p] ==  *(i+p) == *(p+i) == p[i]
	//	printf("%d ", i[p]);  //arr[i]
	//}
	/*for (i = 0; i < sz; i++)
	{
	printf("%d ", arr[i]);
	}*/
	return 0;
}