//������ɻ������� 
#include <stdio.h>

void swap(int *p,int *q){
	int *t;//���Ҫ����p��q��ֵ����t������int *��������int���������� 
	t = p;//��ȷΪ t = *p; 
	p = q;//ͬ�� 
	q = t;//ͬ�� 
	return;
}

int main(void){
	int a = 3;
	int b = 5;
	swap(&a,&b);//swap(*p,*q)�Ǵ���ģ�swap(a,b)Ҳ�Ǵ���� 
	printf("a = %d,b = %d\n",a,b);
	return 0;
} 
