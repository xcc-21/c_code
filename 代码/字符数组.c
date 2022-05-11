#include<stdio.h>
int main(void)
{
	char str[12]={'h','e','l','l','0','\0','a','b','c'};
	int i;
	for(i=0;i<12;++i)
	printf("%d\n",str[i]);
	printf("\n");
	printf("%s\n",str);
	int arr[3]={11,21,31};
	printf("%p\t%p\n",arr,arr[0]);
	printf("arr=%d\n",*(arr+2));
	char *p=arr;
	printf("*(p+1)=%d\n",*(p+2));
	printf("%c\n",*p);
	
	return 0;
}
