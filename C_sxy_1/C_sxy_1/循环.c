#define _CRT_SECURE_NO_WARNINGS 1
//例子：
#include <stdio.h>
int main()
{
	int ch = 0;
	char password[20] = {0};
	int ret = 0;
	printf("请输入密码:>");
	scanf("%s", &password);//输入密码，并存放在password数组中
	//缓冲区还剩一个\n
	//读取一下\n
	while ((ch = getchar() != '\n'))
	{
		;
	}
	
	printf("请确认(Y/N):->");
	ret = getchar();
	if (ret == 'Y') {
		printf("确认成功");
	}
	else {
		printf("放弃确认");
		return 0;
	}
}





//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	//ctrl+z可以结束getchar()
//	//EOF-end of file 文件结束标志
//	while ((ch = getchar()) != EOF) {//接收一个字符放入ch中，看是否等于EOF
//		putchar(ch);//打印出ch
//	}
//	return 0;
//}





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