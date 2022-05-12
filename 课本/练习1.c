# include <stdio.h>

long func(long x)
{
	if(x<100)
	return x%10;
	else
	return func(x/100)*10+x%10;
}

void main()
{
printf("%ld\n",func(13264));
 } 
