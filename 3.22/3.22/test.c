#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//�±��0
//	int k = 17;//Ҫ������
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;//Ҫ������
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	
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
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}
//
//#include <windows.h>
//#include <string.h>
//
//int main()
//{
//	//
//	//welcome to bit!!!!!!!!
//	//######################
//	//w####################!
//	//we##################!!
//	//wel################!!!
//	//...
//	//welcome to bit!!!!!!!!
//	//
//	//char arr[] = "bit";
//	char arr1[] = "welcome to bit!!!!!!!!";
//	char arr2[] = "######################";
//
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯�ߺ���-��λ�Ǻ���
//		system("cls");//ִ��ϵͳ����-cls-������Ļ��Ϣ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}
//
////����������Լ�������ͷ�ļ�����ʹ��""
//#include "test.h"
//
////���������⺯����ͷ�ļ�����ʹ��<>
//#include <stdio.h>
//


#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);//������ȷ�������ǣ���123456��
//		//�ж�
//		//�����ַ����Ƚϴ�С����ֱ����==����Ӧ��ʹ��strcmp(),string compare
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}
//
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("***   1. play     0. exit   ***\n");
//	printf("*******************************\n");
//}
//
////RAND_MAX-32676
////rand��������0-32767֮����������
////time ����
////����һ��ʱ���
////ʱ���ָ���ǣ�������ڵ���time���������ʱ��ͼ��������ʼʱ�䣨1970.1.1 0:0:0��֮���һ����ֵ����λ����
////
////time_t
//
//void game()
//{
//	int guess = 0;
//	//1. ��������һ�������
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2. ������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	//ֻҪ����һ��-����Ƶ���ĵ���
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//		//
//	} while (input);
//	return 0;
//}


//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//	return 0;
//}

#include <stdlib.h>
//
//int main()
//{
//	//�ػ�
//	//shutdown -s -t 60
//	char input[100] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	printf("������:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");//ȡ���ػ�
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//
//int main()
//{
//	//�ػ�
//	//shutdown -s -t 60
//	char input[100] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		printf("������:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");//ȡ���ػ�
//			break;
//		}
//	}
//	return 0;
//}
//

//
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//
//int main()
//{
//	//1-100
//	//��λΪ9��9 19 29 39 49 59 69 79 89 99
//	//ʮλΪ9  90 91 92 93 94 95 96 97 98 99 
//	//20
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//
//	return 0;
//}


//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	//   /(����)��˵�����ߵĲ���������������ִ�е�������������ֻҪ��һ���������Ǹ�������ִ�еľ��Ǹ���������
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//
//	return 0;
//}


//��10 �����������ֵ
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//����arr[0]������������Ԫ��
//	max = arr[0];
//	//��ʣ�µ�����Ԫ�غ�max�Ƚ�
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//

//����Ļ�����9 * 9�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//ÿ�δ�ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//

int main()
{
	int len = strlen("abc");
	printf("%d\n", len);

	return 0;
}
