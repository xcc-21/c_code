/*2020��11��26��08��06��
�ɼ��������
*/
#include<stdio.h>
int main()
{
	float score;
	printf("���������Ŀ��Գɼ���");
	scanf("%f",&score);
	if (score > 100)
		printf("�������Σ�\n");
	else if (score >= 90 && score <= 100)
		printf("���㣡\n");
	else if (score >= 80 && score < 90)
		printf("���ã�\n");
	else if (score > 60 && score < 80)
		printf("����\n");
	else if (score >= 0 && score < 60)
		printf("������\n");
	else
		printf("����������ͣ���Ҫ����Ա���\n");

	return 0;
}
/*���н����
--------------------------
���������Ŀ��Գɼ���-7
����������ͣ���Ҫ����Ա���
--------------------------
�ܽ᣺��֧���ѡ����Ҫ���������
*/