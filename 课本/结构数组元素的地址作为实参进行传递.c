# include <stdio.h>
struct stu
{
	
	char *r;//一个字符串 
	int sc[3];//三个整数 
	
};

char fun(struct stu *t)
{
	int i,total=0;
	for(i=0;i<3;i++)
	total=total+t->sc[i];//求三个整数sc[0],s[1],s[2]的总和 
	t->r=total>200?"Y":"N"; //运用了三目运算 比较总数是否大于200返回字符 Y 或 N 
}

int main()
{
	int i;
	struct stu st[3]={{"101",58,79,90},{"102",40,80,50},{"103",99,80,79}};
	for(i=0;i<3;i++)
	{
		printf("%s",st[i].r);
		fun(&st[i]);//结构数组元素的地址作为实参 
		printf("\t%s\n",st[i].r);
	}
	
	return 0;
 } 
