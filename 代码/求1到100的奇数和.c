#include<stdio.h>
int main(void)
{
	int i;
	int sum=0;
	for(i=1;i<101;++i)//ѭ����101���˳�ѭ��
	{
		if (i%2==1)
			sum += i;//�ȼ���sum=sum +i
	}
	printf("sum=%d\n",sum);
	return 0;
}