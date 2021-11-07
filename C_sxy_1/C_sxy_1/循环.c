#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ch = 0;
	//ctrl+z可以结束getchar()
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}
	return 0;
}





//#include <stdio.h>
//int main()
//{
//	int ch = getchar();//获取屏幕输入的字符
//	putchar(ch);//输出字符
//	printf("%c\n", ch);
//	return 0;
//}






//while循环
//在屏幕上打印出1-10
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10) {
//		i++;
//		if (i == 5) {
//			continue;//跳出此次循环结束，再重新循环
//		}
//		printf("%d\n", i);
//
//		
//	}
//	return 0;
//}