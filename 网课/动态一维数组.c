# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int a[5];//���intռ4���ֽڵĻ����������ܹ�������20���ֽڣ�ÿ�ĸ��ֽڱ�������һ��int������ʹ�� 
	int len;
	int i;
	int * pArr;
	
	printf("����������Ҫ��ŵ�Ԫ�ص�����");
	scanf("%d",&len);
	pArr = (int *)malloc(4*len); // ���ж�̬�Ĺ�����һ��һά���飬����������Ϊint���� ������int pArr[len]; 
	
	//��һά������в���  �磺�Զ�̬һά������и�ֵ 
	for(i=0;i<len;++i)
		scanf("%d",&pArr[i]);
		
	//��һά����������
	printf("һά����������ǣ�\n"); 
	for(i=0;i<len;++i) 
	printf("%d\n",
	pArr[i]);
	free(pArr);//�ͷŶ�̬��������� 
	return 0;
 } 
