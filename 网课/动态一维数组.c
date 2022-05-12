# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int a[5];//如果int占4个字节的话，则本数组总共包含有20个字节，每四个字节被当作了一个int变量来使用 
	int len;
	int i;
	int * pArr;
	
	printf("请输入你想要存放的元素的整数");
	scanf("%d",&len);
	pArr = (int *)malloc(4*len); // 本行动态的构造了一个一维数组，该数组类型为int类型 类似于int pArr[len]; 
	
	//对一维数组进行操作  如：对动态一维数组进行赋值 
	for(i=0;i<len;++i)
		scanf("%d",&pArr[i]);
		
	//对一维数组进行输出
	printf("一维数组的内容是：\n"); 
	for(i=0;i<len;++i) 
	printf("%d\n",
	pArr[i]);
	free(pArr);//释放动态分配的数组 
	return 0;
 } 
