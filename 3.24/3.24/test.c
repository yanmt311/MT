#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//strcpy -- string copy - �ַ�������
//char * strcpy(char * destination, const char * source);
//�ַ�����������
//int main()
//{
//	char arr1[20] = "##########";
//	//bit\0######
//	char arr2[] =   "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//memset
//memory - �ڴ� set - ����
//memset - �ڴ�����
//

//void * memset(void * ptr, int value, size_t num);


//int main()
//{
//	char arr[] = "hello bit";//***** bit
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//
//
//int get_max(int x, int y)
//{
//	//return (x > y ? x : y);
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//
//	max = get_max(a, b);
//	//max = get_max(a, get_max(30, 5));
//
//	printf("max = %d\n", max);
//	return 0;
//}
//err
//
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}
////ok
//void Swap2(int *pa, int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;//�ȼ���tmp = a;
//	*pa = *pb;//a = b;
//	*pb = tmp;
//	//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	Swap2(&a, &b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/	
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;//�õ���a�ĵ�ַ
//	*pa = 20;
//	printf("a = %d\n", a);
//	return 0;
//}

#include <math.h>
//
//int is_prime(int n)
//{
//	//�ж�n�Ƿ�Ϊ����
//	//2->n-1
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	//������
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//

//
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
//}
//
//
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//
//                //int* arr
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	//�Ҳ���
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	//���鴫�ε�ʱ�򣬴���ȥһ���������������ϴ���ȥ�����������Ԫ�صĵ�ַ &arr[0]
//	int ret = binary_search(arr, k, sz);//�ҵ��˷����±꣬�Ҳ�������-1
//	//���鴫�η�������-�����Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//
//	return 0;
//}
//
//int main()
//{
//	//1
//	int len = strlen("bit");
//	printf("len = %d\n", len);
//
//	//2
//	printf("len = %d\n", strlen("bit"));
//
//	return 0;
//}
//
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}

#include "add.h"
#include "sub.h"

int main()
{
	int a = 10;
	int b = 20;

	//�����ĵ���
	int c = Sub(a, b);//
	int sum = Add(a, b);//

	printf("sum = %d\n", sum);

	return 0;
}
