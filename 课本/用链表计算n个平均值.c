# include <stdio.h>
# include <stdlib.h>
int main()
{
	int i,j=0,*p;
	float sum=0;
	printf("���������ĸ�����");
	scanf("%d",&i);//��ȡ���ٸ��� 
	p=(int *)malloc(i * sizeof(int));//malloc�ķ���ֵ��Ҫ����lei'xu'z'n����ת�� 
	//����p=(int*)calloc(i,sizeof(int)); 
	if(p)//����ڴ�����Ƿ�ɹ� 
	{
	while(j++ < i)
	 	{
			printf("��%d�����ǣ�",j);
			scanf(" %d",p++);//�������� 
		}
		for(j=i;j>0  ;j--)
			sum += * (p-j);//���ܺ� 
		printf("%f",(sum/i));//���ƽ��ֵ 
		free(p-i);//�ͷ�������ڴ� 
	}else
		printf("�ڴ�������"); 
	
	return 0;
 } 
