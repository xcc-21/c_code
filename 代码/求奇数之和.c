#include<stdio.h>
int main()
{
	int i,
	sum = 0;
	for(i=1;i<=100;i+=2)//i����ֵ1���ڷ�Χ100֮�������ѭ������i��ֵ���μ�2���ȼ���i=i+2
	{sum=sum+i;//��sum+i��ֵ��sum����1�ټ�2����sum3
		printf("sum=%d,%d\n",sum,i);//sumΪ�����ĺͣ�iΪ����
	}
	for(i=1;i<100;i+=2)
		printf("%d\n",i);
	return 0;
}