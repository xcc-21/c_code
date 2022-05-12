# include <stdio.h>
# include <stdlib.h>
int main()
{
	int i,j=0,*p;
	float sum=0;
	printf("请输入数的个数：");
	scanf("%d",&i);//获取多少个数 
	p=(int *)malloc(i * sizeof(int));//malloc的返回值需要进行lei'xu'z'n类型转换 
	//或者p=(int*)calloc(i,sizeof(int)); 
	if(p)//检查内存分配是否成功 
	{
	while(j++ < i)
	 	{
			printf("第%d个数是：",j);
			scanf(" %d",p++);//接受输入 
		}
		for(j=i;j>0  ;j--)
			sum += * (p-j);//求总和 
		printf("%f",(sum/i));//输出平均值 
		free(p-i);//释放申请的内存 
	}else
		printf("内存分配错误！"); 
	
	return 0;
 } 
