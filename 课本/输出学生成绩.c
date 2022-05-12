# include<stdio.h>

average(int student[5][6])
{
	
	int i,j;
	printf("学号		数学		语文		英语		总分		平均分\n");
	for(i=0;i<5;i++)
	{
		student[i][4]=student[i][1]+student[i][2]+student[i][3];//求总分 
		student[i][5]=student[i][4]/3;//求平均值 
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		printf("%-16d",student[i][j]) ;//打印数组元素 
		printf("\n");
	} 
}

seach(int(*p1)[6],int n)//查找不及格学生函数 
{	
	int i,j,flag;
	printf("\n成绩有一门以上课程不及格的学生如下：\n");
	for(i=0;i<n;i++)//n=5，对5个学生3们课进行查找 
	{flag=0;		//用flag做作标记，若成绩<60，flag=1 
		for(j=1;j<4;j++)
			if(*(*(p1+i)+j)<60)
			flag=1;		//**（*p+i)+j 就是score[i][j] 
		if(flag==1)
			for(j=0;j<6;j++)//用循环输出该行6个数 
			printf("%-17d",*(*(p1+i)+j));// *(*(p1+i)+j)是score[i][j] 的值 
			printf("\n");
	}
}

int main()
{
	int score[5][6]={{200101,78,93,82},{2001102,67,83,72},{200103,55,83,62},\
		{200104,65,59,70},{200105,80,78,90}};
		average(score);//调用求平均分函数 
		seach(score,5);//调用查找并输出有不及格学生成绩的函数 
	
	return 0;
 } 
