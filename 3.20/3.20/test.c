#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//
//int main()
//{
//	int ret = func(1);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//д���뽫���������Ӵ�С���
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//a=1 b=2 c=3
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	//a=2 b=1 c=3
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	//a=3 b=1 c=2
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//a=3 b=2 a=1
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}



//дһ�������ӡ1-100֮������3�ı���������
//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		//�ж�i�Ƿ�Ϊ3�ı���
//		if (i % 3 == 0)
//			printf("%d ", i);
//
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int m = 24;
//	int n = 18;
//	int min = (m > n ? n : m);
//	while (1)
//	{
//		if (m%min == 0 && n%min == 0)
//		{
//			printf("���Լ���ǣ�%d\n", min);
//			break;
//		}
//		min--;
//	}
//
//	return 0;
//}

//int main()
//{
//	int m = 18;
//	int n = 24;
//	int r = 0;
//	//շת�����
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("���Լ��:%d\n", n);
//	return 0;
//}


//��ӡ1000�굽2000��֮�������
//
//int main()
//{
//	int year = 1000;
//	int count = 0;
//	while (year <= 2000)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//������жϹ���
//		//1. �ܱ�4���������Ҳ��ܱ�100����������
//		//2. �ܱ�400����������
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//
//		year++;
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//дһ�����룺��ӡ100~200֮�������
//
//int main()
//{
//	int i = 100; 
//	int count = 0;
//	while (i <= 200)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//������ֻ�ܱ�1���������ֵ��������
//		//1.����2->i-1֮������֣��ǲ���������ȥ�Գ�i
//		//�����������˵��i�������������2->i-1֮�������û��һ��������i���Ǿ�˵��i������
//		int j = 2;
//		while (j<i)
//		{
//			//��j�Գ�i
//			if (i%j == 0)
//			{
//				//��������
//				break;
//			}
//			j++;
//		}
//		//1,2
//		if (i == j)
//		{
//			//������
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//


#include <math.h>
//2
//
//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)
//	{
//		int j = 2;
//		while (j<=sqrt(i))
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//3
//int main()
//{
//	int i = 101;
//	int count = 0;
//	while (i <= 200)
//	{
//		int j = 2;
//		while (j <= sqrt(i))
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i = i+2;
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//�Գ���
//
// ��������n�־���
//
//

//int main()
//{
//	//int a = 0;
//	int a = 0;//һ���ֲ���������ʼ����ʱ�򣬷ŵ������ֵ
//	printf("a=%d\n", a);
//	a = a + 1;
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	putchar(ch);
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//EOF - end of file - �ļ�������־ - �����ļ�ĩβ
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("����������:>");//
//	scanf("%s", input);//123456
//	printf("��ȷ�����루Y/N��:>");
//	
//	//��ջ�����
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	//
//	ch = getchar();
//
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;//��ʼ��
//
//	while (i < 10)//�ж�
//	{
//		printf("%d ", i);
//
//		i++;//����
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//	//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//�����±��Ǵ�0��ʼ
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//
//	for (i = 100; i <=200; i++)
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	//forѭ���еĳ�ʼ�����жϡ����� ����ѡ���Ե�ʡ��
//	//���жϲ��ֱ�ʡ����ζ���жϲ��ֺ�Ϊ��
//
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//	while (i<10);
//	return 0;
//}
//
//
//int main()
//{
//	//5*4*3*2*1
//	//n*(n-1)*(n-22)*...*3*2*1
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	/*while (i <= n)
//	{
//		ret = ret*i;
//		i++;
//	}*/
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6  = 9
//
//	for (n = 1; n <= 3; n++)
//	{
//		//����n�Ľ׳�
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	//1 2 6  = 9

	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}

	printf("%d\n", sum);

	return 0;
}