#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//
//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//123
//	Print(num);
//	//Print(123)
//	//Print(12) + 3
//	//Print(1) + 2 + 3
//	//1 2 3
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}

//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);//str++
//	else
//		return 0;
//}
//
//#include <string.h>
//
//int main()
//{
//	char arr[] = "bit";//����������Ԫ�صĵ�ַ-char�ĵ�ַ char*
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	int a = 1;
//	int b = a + 1;//a=1 b=2
//	int b = ++a;  //a=2 b=2
//	/*my_strlen("bit");
//	1 + my_strlen("it");
//	1 + 1 + my_strlen("t");
//	1 + 1 + 1 + my_strlen("");
//	1 + 1 + 1 + 0;
//	3;*/
//	return 0;
//}

//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//5
//
//	int ret = Fac(n);
//	//int i = 0;
//	//int ret = 1;
//	//for (i = 1; i <= n; i++)
//	//{
//	//	ret = ret*i;
//	//}
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//���n��쳲�������
//��쳲���������
//1 1 2 3 5 8 13 21 34 55 ....
//

//�ݹ�İ汾

//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
////
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//int ret = Fib(n);//��n��쳲�����������ȡ�ǲ��ʺ�ʹ�õݹ����
//	int ret = Fib(n);//
////	printf("\ncount = %d\n", count);
//
//	//50
//	//49 48
//	//48 47 47 46
//	//47 46 46 45 46 45  45 44
//	//...
//	//
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	//1 - 100
//	//����
//	//����Ĵ���
//	//Ԫ�ص�����   ������[����Ĵ�С-����]
//	//
//	int n = 5;
//
//	int arr[100];
//	char ch[3+2];
//
//	return 0;
//}
//
//int main()
//{
//	//int arr[10] = { 1, 2, 3 };//����Ĳ���ȫ��ʼ��-ֻ��ʼ����3��Ԫ�ء�ʣ���Ĭ�ϳ�ʼ��Ϊ0
//	//int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int arr3[] = { 1, 2, 3 };
//	//char arr4[] = {'a', 'b', 'c'};
//	char arr5[] = { 'a', 98, 'c' };
//	char arr6[] = "abc";		  
//	printf("%d\n", strlen(arr5));//
//	printf("%d\n", strlen(arr6));//
//
//	//printf("%d\n", sizeof(arr5));//3*sizeof(char)= 3
//	//printf("%d\n", sizeof(arr6));//4*sizeof(char) = 4
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//				  //0  1  2  3  4  5  6  7  8  9
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//0  1  2  3  4  5  6  7  8  9
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//%p - ��ӡ��ַ
//	}
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//0  1  2  3  4  5  6  7  8  9
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	int*p = arr;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


int main()
{
	int arr[][4] = { { 1, 2 }, { 3, 4 } };//�������еĶ�ά����
	//char ch[3][5];//3��5�еĶ�ά���飬ÿ��Ԫ�ص���char
	return 0;
}
