# include <stdio.h>
int main()
{
	int i,j,b[4][3];
	int a[3][4]={1,2,3,0,4,5,6,1,7,8,9,2};
	printf("数组a：\n");
	for(i=0;i<3;i++)//输出a 
	{
		for(j=0;j<4;++j)
		printf("%-4d",a[i][j]);
		printf("\n");
	}
	for(i=0;i<4;i++)//a置换成b 
		for(j=0;j<3;++j)
	    	b[i][j]=a[j][i];
		printf("数组b:\n");
			for(i=0;i<4;++i)//输出b 
		{
				for(j=0;j<3;++j)
			printf("%-4d",b[i][j]);
			printf("\n");
		}
	
	
	return 0;
 } 
