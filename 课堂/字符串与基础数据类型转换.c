#include<stdio.h>
#include<stdlib.h>
int main(void)
{
//	char *p="101";//˫���� 
//	int a;
//	sscanf(p,"%d",&a);//�����Ǽ�s��scanf 
//	printf("%d\n",a);

//	double value = atof("3.14");
//	printf("%lf\n",value);
	
	int value = 1000;
	char buf[10];
	sprintf(buf,"%d",value); 
	puts(buf);
	
	return 0;
 } 
