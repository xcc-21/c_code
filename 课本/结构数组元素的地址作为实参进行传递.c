# include <stdio.h>
struct stu
{
	
	char *r;//һ���ַ��� 
	int sc[3];//�������� 
	
};

char fun(struct stu *t)
{
	int i,total=0;
	for(i=0;i<3;i++)
	total=total+t->sc[i];//����������sc[0],s[1],s[2]���ܺ� 
	t->r=total>200?"Y":"N"; //��������Ŀ���� �Ƚ������Ƿ����200�����ַ� Y �� N 
}

int main()
{
	int i;
	struct stu st[3]={{"101",58,79,90},{"102",40,80,50},{"103",99,80,79}};
	for(i=0;i<3;i++)
	{
		printf("%s",st[i].r);
		fun(&st[i]);//�ṹ����Ԫ�صĵ�ַ��Ϊʵ�� 
		printf("\t%s\n",st[i].r);
	}
	
	return 0;
 } 
