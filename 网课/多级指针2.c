# include <stdio.h>
void f(int **q)
{
	
	//*q就是p 
}

void g()
{
	int i = 10;
	int *p = &i;
	
	f(&p);//p是int*类型，&p是int**类型 
 } 

int main(void) 
{
	g(); 
	return 0;
}
