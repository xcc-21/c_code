# include <stdio.h>

fun(int k)
{
	static int i;
	int j=0;
	return ++i+k+j++;
}

int main()
{
	static int i,n;
	for(i=0;i<4;i++)
	n+=fun(i);
	printf("%3d",n);
	
	return 0;
 } 
