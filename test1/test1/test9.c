
////static int g_val = 2020;//��static ����ȫ�ֱ�����ʵ�������޸�����������
//
////����һ������
//static int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//������ҵ
//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++) {
//		printf("%d\, ", sum(a));
//	}
//}