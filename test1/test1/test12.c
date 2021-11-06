//创建结构体
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "C语言程序设计",55 };
	struct Book* pb = &b1;//取出b1的地址放在struct Book这个类型中，用pb这个变量保存
	//访问成员
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	//修改后的价格(变量可以修改）
	b1.price = 30;
	printf("修改后的价格：%d\n", b1.price);
	//利用pb打印出书名和价格
	printf("%s\n", (*pb).name);//法一:结构体变量.成员
	printf("利用pb打印出的书名：%s\n", pb->name);//法二：结构体指针->成员
	strcpy(b1.name, "C++");
	printf("%s", b1.name);

	return 0;

}
