#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>  
void SetColor(unsigned short ForeColor,unsigned short BackGroundColor)
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon,
				(ForeColor % 16) | (BackGroundColor % 16 * 16));
}

int main()
{
	float x, y;
	int s = 0, n, i, j;
	for (i = 1; i <= 50; i++)
	{
		SetColor(0, 14);
		printf(" ");
		printf("%d%%", 2 * i);
		Sleep(101 - 2 * i);
		printf("\b\b\b");
	}
	SetColor(15, 0);
	printf("\b\n�������!��������:");
	Sleep(2000);
	system("cls");
	do
	{
		system("color 0E");
		for (i = 0; i <= 56; i++)
		{
			if (i >= 20)
			{
				printf("*");
				Sleep(10);
			} else
				printf(" ");
		}
		printf("\n");
		for (i = 0; i <= 56; i++)
		{
			if (i >= 20)
			{
				printf("*");
				Sleep(10);
			} else
				printf(" ");
		}
		printf("\n\t\t\t����Ҫ����������:\n");
		printf("\n\t\t\t1:��love��ɵ�����!\n");
		printf("\n\t\t\t2:������ַ���ɵ�����!\n");
		printf("\n\t\t\t3:�����������ɵ�����!\n");
		printf("\n\t\t\t4:�������ɫ��ɵ�����!\n");
		printf("\n\t\t\t5:�˳�!\n");
		for (i = 0; i <= 56; i++)
		{
			if (i >= 20)
			{
				printf("*");
				Sleep(10);
			} else
				printf(" ");
		}
		printf("\n");
		for (i = 0; i <= 56; i++)
		{
			if (i >= 20)
			{
				printf("*");
				Sleep(10);
			} else
				printf(" ");
		}
		printf("\n\t\t\t");
		srand(time(NULL));
		scanf("%d", &n);
		system("cls");
		switch (n)
		{
		case 1:
			for (x = 1.3; x >= -1.1; x -= 0.1)
			{
				for (y = -2; y <= 1.4; y += 0.053)
				{
					if (pow(x * x + y * y - 1, 3) -
					    x * x * x * y * y <= 0)
					{
						s++;
						if (s % 4 == 1)
							printf("l");
						if (s % 4 == 2)
							printf("o");
						if (s % 4 == 3)
							printf("v");
						if (s % 4 == 0)
							printf("e");
						Sleep(2);
					} else
						printf(" ");
				}
				printf("\n");
			}
			printf("�������,�������������ҳ��!");
			break;
		case 2:
			for (x = 1.3; x >= -1.1; x -= 0.1)
			{
				for (y = -2; y <= 1.4; y += 0.053)
				{
					if (pow(x * x + y * y - 1, 3) -
					    x * x * x * y * y <= 0)
					{
						printf("%c",
						       rand() % 10 +
						       rand() % 10 + 97);
						Sleep(2);
					} else
						printf(" ");
				}
				printf("\n");
			}
			printf("�������,�������������ҳ��!");
			break;
		case 3:
			for (x = 1.3; x >= -1.1; x -= 0.1)
			{
				for (y = -2; y <= 1.4; y += 0.053)
				{
					if (pow(x * x + y * y - 1, 3) -
					    x * x * x * y * y <= 0)
					{
						printf("%d", rand() % 10);
						Sleep(2);
					} else
						printf(" ");
				}
				printf("\n");
			}
			printf("�������,�������������ҳ��!");
			break;
		case 4:
			for (x = 1.3; x >= -1.1; x -= 0.1)
			{
				for (y = -2; y <= 1.4; y += 0.053)
				{
					if (pow(x * x + y * y - 1, 3) -
					    x * x * x * y * y <= 0)
					{
						SetColor(0, rand() % 6 + 10);
						printf(" ");
						Sleep(2);
					} else
					{
						SetColor(0, 0);
						printf(" ");
					}
				}
				printf("\n");
			}
			SetColor(15, 0);
			printf("�������,�������������ҳ��!");
			break;
		default:
			break;
		}
		getch();
		system("cls");
	}
	while (n != 5);
}




