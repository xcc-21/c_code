# include<stdio.h>

average(int student[5][6])
{
	
	int i,j;
	printf("ѧ��		��ѧ		����		Ӣ��		�ܷ�		ƽ����\n");
	for(i=0;i<5;i++)
	{
		student[i][4]=student[i][1]+student[i][2]+student[i][3];//���ܷ� 
		student[i][5]=student[i][4]/3;//��ƽ��ֵ 
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		printf("%-16d",student[i][j]) ;//��ӡ����Ԫ�� 
		printf("\n");
	} 
}

seach(int(*p1)[6],int n)//���Ҳ�����ѧ������ 
{	
	int i,j,flag;
	printf("\n�ɼ���һ�����Ͽγ̲������ѧ�����£�\n");
	for(i=0;i<n;i++)//n=5����5��ѧ��3�ǿν��в��� 
	{flag=0;		//��flag������ǣ����ɼ�<60��flag=1 
		for(j=1;j<4;j++)
			if(*(*(p1+i)+j)<60)
			flag=1;		//**��*p+i)+j ����score[i][j] 
		if(flag==1)
			for(j=0;j<6;j++)//��ѭ���������6���� 
			printf("%-17d",*(*(p1+i)+j));// *(*(p1+i)+j)��score[i][j] ��ֵ 
			printf("\n");
	}
}

int main()
{
	int score[5][6]={{200101,78,93,82},{2001102,67,83,72},{200103,55,83,62},\
		{200104,65,59,70},{200105,80,78,90}};
		average(score);//������ƽ���ֺ��� 
		seach(score,5);//���ò��Ҳ�����в�����ѧ���ɼ��ĺ��� 
	
	return 0;
 } 
