#include <stdio.h>

int max_val(int a[][4])//��������Ҫһ�� 
//�β������һά�ĳ��ȿ���ʡ�� �����ڶ�ά���Ȳ���ʡ�� 
{
	int max,i,j;
	max=a[0][0];//max��ʼ�� 
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
	if(a[i][j]>max)//�Ƚ���� 
	max=a[i][j];
	return max;//���max������������ 
	
}

int main()
{
	int a[][4]={{1,3,40,5},{4,6,3,8},{94,33,66,77}};
	printf("%d",max_val(a));
	
	
	return 0;
}
