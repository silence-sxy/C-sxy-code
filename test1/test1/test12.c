//�����ṹ��
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
	struct Book b1 = { "C���Գ������",55 };
	struct Book* pb = &b1;//ȡ��b1�ĵ�ַ����struct Book��������У���pb�����������
	//���ʳ�Ա
	printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.price);
	//�޸ĺ�ļ۸�(���������޸ģ�
	b1.price = 30;
	printf("�޸ĺ�ļ۸�%d\n", b1.price);
	//����pb��ӡ�������ͼ۸�
	printf("%s\n", (*pb).name);//��һ:�ṹ�����.��Ա
	printf("����pb��ӡ����������%s\n", pb->name);//�������ṹ��ָ��->��Ա
	strcpy(b1.name, "C++");
	printf("%s", b1.name);

	return 0;

}
