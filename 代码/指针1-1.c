#include<stdio.h>
int main(void)
{
	char m='A';
	int *p;//����ָ�����͵ı��� 
	p=&m; //������m�ĵ�ַ��ֵ��p 
	printf("&m=0x%p\n",&m);//�������m�ĵ�ַ 
	printf("m=%d\n",m);//�������m������
	printf("&p=0x%p\n",&p) ;//�������p�ĵ�ַ 
	printf("p=0x%p\n",p);//�������p�����ݣ����Ǳ���m�ĵ�ַ 
	//����p��������һ����ַ��ȡ�����ַ������� 
	printf("*p=%c\n",*p);
	printf("q=0x%p\n",q);
	printf("*q=0x%p\n",*q);
	printf("**q=%d\n",**q);
	return 0;
 } 
