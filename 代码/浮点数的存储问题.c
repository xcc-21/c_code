/*
	2020��12��16��16��10��
	�����򲻶ԣ���Ϊѭ���и��µı������ܶ���Ϊ������
*/

#include<stdio.h>
int main(void)
{
	float i;
	float sum = 0;
	for(i=1.0;i<100;++i)//�����Ͳ��ܱ�֤���Ծ�ȷ�Ĵ洢һ��С��
	{
		sum = sum +1/i;
	}
	printf("sum = %f\n",sum);
	return 0;
}