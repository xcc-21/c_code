/*2020年11月26日08点06分
成绩结果样表
*/
#include<stdio.h>
int main()
{
	float score;
	printf("请输入您的考试成绩：");
	scanf("%f",&score);
	if (score > 100)
		printf("这是做梦！\n");
	else if (score >= 90 && score <= 100)
		printf("优秀！\n");
	else if (score >= 80 && score < 90)
		printf("良好！\n");
	else if (score > 60 && score < 80)
		printf("及格！\n");
	else if (score >= 0 && score < 60)
		printf("不及格！\n");
	else
		printf("输入分数过低，不要如此自卑！\n");

	return 0;
}
/*运行结果：
--------------------------
请输入您的考试成绩：-7
输入分数过低，不要如此自卑！
--------------------------
总结：分支结果选择想要的哪种情况
*/