//#include <stdio.h>
////static���κ����ı��˺�������������
////�����ⲿ��������test9.c�У�
//extern int Add();
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d", sum);
//
//}

//static����ȫ�ֱ���
//int main()
//{
//	extern g_val;
//	printf("&d", g_val);
//	return 0;
//}
//void test()
//{
//	// int a = 1;//������a�Ǿֲ�����,������ִ����test()�������֮���������
//	static a = 1;//��static ���ξֲ�����ʱ���ֲ����������������ӳ��ˣ���������������
//	//static ����ȫ�ֱ���
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5) {
//		test();
//		i++;
//		printf("i=%d\n", i);
//	}
//	return 0;
//}
