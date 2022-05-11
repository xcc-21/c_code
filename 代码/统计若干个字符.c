/*·················
2020年12月21日11点24分
··················*/

#include <stdio.h>
int main(void)
{
	int upper,lower,digit,i,other;//定义变量分别存放统计结果
	char ch;						//定义变量ch
	upper=lower=digit=other=0;		//设置村放统计结果的给变量的初值为零
	printf("请输入10个字符:");		//输入提示
	for(i=1;i<=10;i++)				//循环执行10次
	{   ch=getchar();				//从键盘输入10个字符，赋值给变量ch

	if(ch>='a'&&ch<='z')			//如果ch是小写英文字母，upper加1
		upper++;

	else if(ch>='A'&&ch<='Z')		//如果ch是大写英文字母，lower加1
		lower++;

	else if(ch>='0'&&ch<='9')		//如果ch是数字字符，digit加1	
		digit++;

	else							//如果ch是其他字符，other加1
		other++;
	}
	printf("小写字母有%d个,大写字母有%d个，数字有%d个，其他字符有%d个",upper,lower,digit,other);
}