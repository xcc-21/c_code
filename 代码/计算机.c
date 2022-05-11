#include <stdio.h>
void main()
{
	float a,b;
	int i,j;
	char c;
	printf("input expression:a+(-,*,/,%)b\n");
	scanf("%f%c%f",&a,&c,&b);
	scanf("%d%c%d",&i,&c,&j);
	switch(c)
	{
	case'+':
		printf("%f\n",a+b);
		break;
		
	case'-':
		printf("%f\n",a-b);
		break;
	case'*':
		printf("%f\n",a*b);
		break;
	case'/':
		printf("%f\n",a/b);
		break;
	case'%':
		printf("%d\n",i%j);
		break;

	default:
		printf("input error\n");
	}
	return 0;
}