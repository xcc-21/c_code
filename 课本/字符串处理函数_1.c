# include <stdio.h>
int main()
{
	int i,j,a[3][3];
	for(i=0;i<3;++i)
	{
			for(j=0;j<3;++j)
			{
				if(i+j==3)
				a[i][j]=a[i-1][j]+1;
				else
				 a[i][j]=j;
				 printf("%4d",a[i][j]);
			}
			printf("\n");
	}
	
	return 0;
}
