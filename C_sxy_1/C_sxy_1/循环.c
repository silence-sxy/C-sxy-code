#define _CRT_SECURE_NO_WARNINGS 1
//���ӣ�
#include <stdio.h>
int main()
{
	int ch = 0;
	char password[20] = {0};
	int ret = 0;
	printf("����������:>");
	scanf("%s", &password);//�������룬�������password������
	//��������ʣһ��\n
	//��ȡһ��\n
	while ((ch = getchar() != '\n'))
	{
		;
	}
	
	printf("��ȷ��(Y/N):->");
	ret = getchar();
	if (ret == 'Y') {
		printf("ȷ�ϳɹ�");
	}
	else {
		printf("����ȷ��");
		return 0;
	}
}





//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	//ctrl+z���Խ���getchar()
//	//EOF-end of file �ļ�������־
//	while ((ch = getchar()) != EOF) {//����һ���ַ�����ch�У����Ƿ����EOF
//		putchar(ch);//��ӡ��ch
//	}
//	return 0;
//}





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