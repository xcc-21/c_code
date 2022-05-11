#include<stdio.h>
int main(void) 
{
	
	int b[][3]={{11,21,31},{17,27,37}};
		printf("b[0][0]=%d\n",*(*b));//11
	printf("b[0][0]=%d\n",**b);//11
	printf("b[0][1]=%d\n",*(*b+1));//21
	printf("b[0][2]=%d\n",*(*b)+*(*b));//22

	return 0;
}
