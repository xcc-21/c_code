# include <stdio.h>
# include <malloc.h>
 
void f(int * q)
{
	//*p = 200;//error
	//q = 200;
	//**q = 200;//error
	*q = 200; 
	//free(q);//��q��ָ����ڴ��ͷŵ�  ��������ע����������ᵼ�µ�20�еĴ������ 
}

int main(void)
{
	int * p = (int *)malloc(sizeof(int));//sizeof(int)����ֵ��int��ռ���ֽ��� 
	*p = 10;
	
	printf("%d\n",*p);//10
	f(p);//p��int *���� 
	printf("%d\n",*p);//200
	
	return 0;
 } 
