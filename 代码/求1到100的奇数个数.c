#include<stdio.h>
int main(void)
{
	int i;
	int cnt=0;
	for(i=1;i<101;++i)//ѭ����101���˳�ѭ��
	{
		if (i%2==1)
			++cnt;
	}
	printf("sum=%d\n",cnt);
	return 0;
}