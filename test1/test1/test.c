#define _CRT_SECURE_NO_WARNINGS 1//代码是scanf是不会有警告
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	a = 0;
//	b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d",a, b);
//	/*int num = 0;
//	printf("%d", num);
//	return 0;*/
//	/*int num1;
//	int num2;
//	int sum;
//
//	printf("请输入两个正整数：");
//	scanf_s("%d %d", &num1,&num2);
//
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;*/
//
//
//	//short age = 20;//向内存申请2个字节=16个bit位，用来存放20
//	//float weight = 95.6f;
//	
//	
//	/*
//	printf("%d\n", sizeof(char));//
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	*/
//	//return 0;
//
//}
//#include <stdio.h>

//#define MAX 10 //定义一个常量
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//枚举关键字-enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}
//enum Coler//枚举类型中的可能取值
//{
//	red,
//	yellow,
//	blue
//};
//
//int main()
//{
//	enum Color color = blue;//后期的用法
//	blue = 2;//枚举常量不能改，正确的blue = 2
//}