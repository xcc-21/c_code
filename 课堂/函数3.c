#include <stdio.h>
/*
�����Ĺ��ܣ� 
��û�з���ֵ������ֵ��������ʲô������ֵ����ĺ�����ʲô��
���������ĸ��������ͣ������������ 
*/ 
/*
�����Ĺ��ܣ�ʵ���������α���ֵ�Ľ���
����ֵ��void
��������������ָ����β� 
*/ 
void swap(int *x,int *y){
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp; 
	return ;
} 
int main(void)
{
	int v_a=6,v_b=2;
	printf("swap befor v_a=%d\tv_b=%d\n",v_a,v_b);//\t tab �� 
	swap(&v_a,&v_b);//int *x=&v_a,int *y=v_b;
	printf("swap after v_a=%d\tv_b=%d",v_a,v_b);
	
	return 0;
}
/*
���н����
swap befor v_a=6        v_b=2
swap after v_a=2        v_b=6
*/
