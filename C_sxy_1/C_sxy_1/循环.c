#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ch = 0;
	//ctrl+z���Խ���getchar()
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}
	return 0;
}





//#include <stdio.h>
//int main()
//{
//	int ch = getchar();//��ȡ��Ļ������ַ�
//	putchar(ch);//����ַ�
//	printf("%c\n", ch);
//	return 0;
//}






//whileѭ��
//����Ļ�ϴ�ӡ��1-10
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10) {
//		i++;
//		if (i == 5) {
//			continue;//�����˴�ѭ��������������ѭ��
//		}
//		printf("%d\n", i);
//
//		
//	}
//	return 0;
//}