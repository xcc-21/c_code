# include <stdio.h>
int main(void){
	int * p;//�ȼ���int* p��Ҳ�ȼ���int *p��
	int i = 5;
	char ch = 'A';
	p = &i;//*p��p������Ϊ��ַ�ı���
	//p = &ch;error
	//p = ch;error
	//p = 5;error
	*p = 99;
	printf("i = %d,*p = %d\n",i,*p);
	
	return 0; 
	
} 
