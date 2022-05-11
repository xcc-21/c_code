#include<stdio.h>
#include<math.h>
int main()
{
	float y, x, z;

	printf("\n\n\t\t\t那一天\n");
	printf("\t\t     第一次遇见你\n");
	printf("\t\t\t忘不了\n");
	printf("\t\t       你的容颜\n");
	printf("\t\t若轻云之蔽月,如流风之回雪\n");
	printf("\n\n");
	printf("\t\t\t其实\n");
	printf("\t\t      有一句话\n");
	printf("\t\t   我一直想对你说:\n");

	for (y = 2.5; y >= -1.6; y = y - 0.2)
	{
		for (x = -3; x <= 4.8; x = x + 0.1)
		{
			(pow((x * x + y * y - 1), 3) <= 3.6 * x * x * y * y * y
			 || (x > -2.4 && x < -2.1 && y < 1.5 && y > -1)
			 || (((x < 2.5 && x > 2.2) || (x > 3.4 && x < 3.7))
			 && y > -1 && y < 1.5) || (y > -1 && y < -0.6
			 && x < 3.7&& x >2.2)) ? printf("*") :printf(" ");
		}
		printf("\n");
	}
	getchar();
}
