#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int g_val = 100;
//int test(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int arr[20] = { 0 };
//	int i = 0;
//	int sum = test(2, 3);
//	g_val = 200;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (i = 10; i < 20; i++)
//	{
//		arr[i] = i;//�ϵ�
//	}
//	return 0;
//}
//
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//3
//	//1!+2!+3!
//	//1+2+6 = 9
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//
//	for (j = 1; j <= n; j++)
//	{
//		//����j�Ľ׳�
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//3
//	//1!+2!+3!
//	//1+2+6 = 9
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//
//	for (j = 1; j <= n; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//

//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	for (i = 0; i <=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

#include <string.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	if ((dest != NULL) && (src != NULL))
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

#include <assert.h>

//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char *ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//
//	//��srcָ����ַ���������destָ��Ŀռ��У�����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ�ĵص���ʼ��ַ
//}
//
//
//int main()
//{
//	char arr1[20] = "######";
//	char arr2[] = "abcdef";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}



//const����ָ��
//1. const ����*����ߣ����ε��� ָ��ָ������ݣ�*p����ʹ��ָ��ָ������ݣ�����ͨ��p���ı��� 
//����ָ�������p���ǿ��Ըı��
//2. const ����*���ұߣ����ε��� ָ���������p��,ʹ��ָ����������ܱ��޸�
//����ָ��ָ������ݣ�*p�����Ըı�

//int  main()
//{
//	const int num = 10;//num�������޸�
//	int n = 100;
//
//	const int * const p = &num;
//	*p = 0;
//	p = &n;
//
//	printf("num = %d\n", num);
//	printf("%d\n", *p);//100
//	return 0;
//}
//
//

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);

	printf("%d\n", len);

	return 0;
}
//1. �����ʹ���-�﷨����
//2. �����ʹ���
//3. ����ʱ����
//