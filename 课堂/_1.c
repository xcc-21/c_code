#include<stdio.h>
int p_add(int,int);
int p_mul(int,int);
int main(void)
{
	int(*p)(int ,int);
	//p��ָ�����͵ı���  p��������һ����ַ��
	//�������ַ���ʵ�ʱ����ѭ�������򣨺������ͣ�
	//���������־��Ǻ�������ڵ�ַ 
	int va=6,vb=2;
	p=p_add; 
	printf("%d+%d=%d\n",va,vb,p(va,vb)); 
	p=p_mul;
	printf("%d*%d=%d\n",va,vb,p(va,vb));
//	return 0;
}
