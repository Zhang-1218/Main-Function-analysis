#define _CRT_SECURE_NO_WARNINGS 1

//1.ʹ��main�����Ĳ�����ʵ��һ��������������������Խ�������������
//��һ�������� - a��ѡ��ִ�мӷ����� - s��ѡ��ִ�м������� - m��ѡ��ִ�г˷����� - d��ѡ��ִ�г�����������������Ϊ��������
//���磺����test.exe - a 1 2
//ִ��1 + 2���3
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main(int argc, char *argv[])
//{
//	int ret = 0;
//	if (argc != 4)
//	{
//		printf("��������\n");
//		system("pause");
//		return 0;
//	}
//
//	if (argv[1][0] == '-')
//	{
//		switch (*(argv[1] + 1))
//		{
//		case 'a':
//			ret = Add(atoi(argv[2]), atoi(argv[3]));
//			break;
//		case 's':
//			ret = Sub(atoi(argv[2]), atoi(argv[3]));
//			break;
//		case 'm':
//			ret = Mul(atoi(argv[2]), atoi(argv[3]));
//			break;
//		case 'd':
//			ret = Div(atoi(argv[2]), atoi(argv[3]));
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}
//	printf("ret= %d\n", ret);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//
//int main(int argc, char* argv[])
//{
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	if (argc != 4)
//	{
//		printf("��������\n");
//		system("pause");
//		return 0;
//	}
//	x = argv[2];
//	y = argv[3];
//	if (argv[1][0] == '-')
//	{
//		switch (*(argv[1]+1))
//		{
//		case 'a':
//			ret = x + y;
//			break;
//		case 'b':
//			ret = x - y;
//			break;
//		case 'm':
//			ret = x*y;
//			break;
//		case 'd':
//			ret = x / y;
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//2.ʹ�ÿɱ������ʵ�ֺ�����δ֪��������n������ƽ��ֵ��
#include <stdio.h>
#include<stdarg.h>

//#define va_start(ap,v) (ap = (va_list)&v + _INTSIZEOF(v))
//#define va_arg(ap,t) ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )
//#define _INTSIZEOF(n) ( (sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1) )
//#define va_end(ap) ( ap = (va_list)0 )

int average(int n, ...)
{
	//va_list arg;
	char * arg;
	int i = 0;
	int sum = 0;
	//va_start(arg, n);
	arg = (char *)&n + 4;
	for (i = 0; i < n; i++)
	{
		//sum += va_arg(arg, int);
		sum += (*(int *)((arg += 4) - 4));
	}							
	return sum / n;
	//va_end(arg); 
	arg = (char*)0;
}

int main()
{
	printf("%d\n", average(3, 5, 6, 7));
	printf("%d\n", average(5, 1, 2, 3, 4, 5));
	system("pause");
	return 0;
}


//3.ʹ�ÿɱ������ʵ�ֺ�����δ֪��������n�����е����ֵ��
//#include <stdio.h>
//#include <stdarg.h>
//int Max(int n, ...)
//{
//	va_list arg;
//	va_start(arg, n);
//	int m = 0;
//	int i = 0;
//	int max = va_arg(arg, int);
//	for (i = 1; i < n;i++)
//	{
//		m = va_arg(arg, int);
//		if (max <= m)
//			max = m;
//	}
//	va_end(arg);
//	return max;
//}
//
//int main()
//{
//	printf("%d\n", Max(3, 1, 3, 4));
//	printf("%d\n", Max(5, 1, 3, 4, 6, 9));
//	system("pause");
//	return 0;
//}
