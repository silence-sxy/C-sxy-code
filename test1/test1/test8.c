//#include <stdio.h>
////static修饰函数改变了函数的链接属性
////声明外部函数（在test9.c中）
//extern int Add();
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d", sum);
//
//}

//static修饰全局变量
//int main()
//{
//	extern g_val;
//	printf("&d", g_val);
//	return 0;
//}
//void test()
//{
//	// int a = 1;//创建的a是局部变量,所以在执行完test()这个函数之后就销毁了
//	static a = 1;//当static 修饰局部变量时，局部变量的生命周期延长了，出了作用域不销毁
//	//static 修饰全局变量
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
