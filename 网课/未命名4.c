# include <stdio.h>
# define  row 3
# define col 4
int main()
{
	int a[row][col],*p,i,j;
	p=&a[0][0];
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		
		a[i][j]=i*10+j;	
	
	for(i=0;i<row*col;i++)printf("%3d",p[i]);
	 if(p[i]%3==0)
	printf("\n");
	
	return 0;
 } 
