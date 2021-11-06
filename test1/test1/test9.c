
////static int g_val = 2020;//用static 修饰全局变量，实际上是修改了其作用域
//
////定义一个函数
//static int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//课内作业
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