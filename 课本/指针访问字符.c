# include <stdio.h>
int main()
{
	char str[]="1a,2a.3a,4a.5a";int i;
	for(i=0;i;i++)
	if(*(str+i++)=='a')
	str[i-1]='b';
puts(str);
	
	
	return 0;
}
