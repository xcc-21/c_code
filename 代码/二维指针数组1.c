#include<stdio.h>
int main(void) 
{
	
	int b[][3]={{11,21,31},{17,27,37}};
	printf("b[0][0]=%d\n",**b);//11
	printf("b[0][1]=%d\n",*(*b+1));//21
	printf("b[0][2]=%d\n",*(*b+2));//31
	printf("b[1][0]=%d\n",*(*(b+1)));//17
	printf("b[1][1]=%d\n",*(*(b+1)+1));//27
	printf("b[1][2]=%d\n",*(*(b+1)+2));//37
	printf("\n");
	int (*p)[3];
	p=b;
	printf("b[0][0]=%d\n",**b);//11
	printf("b[0][1]=%d\n",*(*b+1));//21
	printf("b[0][2]=%d\n",*(*b+2));//31
	printf("b[1][0]=%d\n",*(*(b+1)));//17
	printf("b[1][1]=%d\n",*(*(b+1)+1));//27
	printf("b[1][2]=%d\n",*(*(b+1)+2));//37
	return 0;
}
