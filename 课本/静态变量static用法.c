#include<stdio.h>

int f(int x)
{
	static int y=0;//��̬���� 
//��̬�����ڱ���ֵ��һ�γ�ֵ�����Զ���������ֵ���ں�������ʱ��ÿ����һ�ξ�Ҫ���¸���ֵ 
		y++;
	return x*y;
}

int main()
{
	int a=2,i;
	for(i=0;i<3;i++)
	printf("%3d\t",f(a)); 
	return 0;
 } 
