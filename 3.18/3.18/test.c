#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void test()
//{
//	static int a = 10;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);//
//	printf("a = %d\n", a);
//	int* p = &a;//p����һ��ָ�����
//	*p = 20;//* - �����ò���
//	printf("a = %d\n", a);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}

//�Լ�����������-�Զ�������
//����һ���������
//int a = 0;
//struct Book
//{
//	//�������ϸ����Ϣ
//	char name[30];//����
//	double price;//����
//	char id[30];//���-ISBN-100099809
//};
//
////�ṹ�����.��Ա��
////�ṹ��ָ��->��Ա��
////��������д����ȫ�ȼ�
//
//int main()
//{
//	//����һ����
//	struct Book b1 = {"���Ӣ�۴�", 55.62, "ISBN-100099809"};
//	//������һ���ṹ��ָ��
//	struct Book* ps = &b1;
//	printf("������ %s\n", (*ps).name);
//	printf("������ %s\n", ps->name);
//	printf("���ۣ� %lf\n", ps->price);
//
//	//struct Book b2 = {"C���Գ������", 32.5, "ISBN-9090001"};
//	////��ӡ
//	//printf("������%s\n", b1.name);
//	//printf("����: %lf\n", b1.price);
//	//printf("���: %s\n", b1.id);
//
//	return 0;
//}


//int main()
//{
//	;//�����
//	return 0;
//}
//
//int main()
//{
//	/*int age = 20;
//	if (age < 18)
//		printf("δ����\n");*/
//
//	/*int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");*/
//
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}		
//	else if (age >= 18 && age < 30)
//		printf("����\n");
//	else if (age >= 30 && age < 60)
//		printf("������\n");
//	else if (age >= 60 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}
//
//
//int main()
//{
//	int a=10;//����
//	int a = 10;//��
//
//	int i = 0;
//	for (i= 0;i<10;i++)
//	{
//	}
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	//int age = 10;
//	//if (age = 5)//���׳���
//	//{
//	//	printf("hehe\n");
//	//}
//	int age = 10;
//	if (5 == age)//�Ƚϳ����ͱ�����ֵ�Ƿ���ȵ�ʱ�򣬰ѳ����������
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//}

//���1-100֮�������

//����1-100֮�����
//�ж�ÿ�����Ƿ�Ϊ����
//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i = i + 2;
//	}
//
//	//while (i <= 100)
//	//{
//	//	//�ж�i�Ƿ�Ϊ����
//	//	if (i % 2 == 1)
//	//		printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}

//int main()
//{
//	// printf("hehe\n");
//	int age = 10;
//	if (age == 5)
//		printf("hehe\n");
//	return 0;
//}

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//
//	/*if (1 == day)
//	{
//		printf("����1\n");
//	}
//	else if (2 == day)
//	{
//		printf("����2\n");
//	}
//	else if (3 == day)
//	{
//		printf("����3\n");
//	}
//	else if (4 == day)
//	{
//		printf("����4\n");
//	}
//	else if (5 == day)
//	{
//		printf("����5\n");
//	}*/
//	//...
//	return 0;
//}

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//ʹ�õĴ������-�û�
//	switch (day)
//	{
//	default://Ĭ��ѡ������ܱ�case��������
//		printf("�������\n");
//		break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	}
//
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);//? ?
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//��ӡ0-9

//int main()
//{
//	int i = 0;
//	//whileѭ���е�break,������ֹѭ��
//	while (i<10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	//whileѭ���е�continue����������ѭ����ߵĴ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ��������ж�
	while (i<10)
	{
		if (i == 5)
			continue;

		printf("%d ", i);
		i++;
	}
	return 0;
}