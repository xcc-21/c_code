/*����������������������������������
2020��12��21��11��24��
������������������������������������*/

#include <stdio.h>
int main(void)
{
	int upper,lower,digit,i,other;//��������ֱ���ͳ�ƽ��
	char ch;						//�������ch
	upper=lower=digit=other=0;		//���ô��ͳ�ƽ���ĸ������ĳ�ֵΪ��
	printf("������10���ַ�:");		//������ʾ
	for(i=1;i<=10;i++)				//ѭ��ִ��10��
	{   ch=getchar();				//�Ӽ�������10���ַ�����ֵ������ch

	if(ch>='a'&&ch<='z')			//���ch��СдӢ����ĸ��upper��1
		upper++;

	else if(ch>='A'&&ch<='Z')		//���ch�Ǵ�дӢ����ĸ��lower��1
		lower++;

	else if(ch>='0'&&ch<='9')		//���ch�������ַ���digit��1	
		digit++;

	else							//���ch�������ַ���other��1
		other++;
	}
	printf("Сд��ĸ��%d��,��д��ĸ��%d����������%d���������ַ���%d��",upper,lower,digit,other);
}