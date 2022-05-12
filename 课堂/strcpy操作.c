# include<stdio.h>
#include<string.h>

int main(){
	char str[]={'h','e','l','l','o','\0','a','b','c'};//字符数组定义并初始化
	//动态，局部变量 
	char *s="lisi";//“lisi”在静态存储区 就是将字符串的首地址初始化变量s的内容 
	char dest[16];//内存空间要给够 
//	dest=str;//error, dest str都是常量
	strcpy(dest,str);
	strcat(dest,s); 
	printf("dest=%s\n",dest);
	printf("str lenggth is %d\n",strlen(str));
	printf("dest lenggth is %d\n",strlen(dest)); 
	printf("s  sizeof lenggth is %d\n",sizeof(s));
	printf("s=%d\n",strlen(s));
	printf("%s",s);
	return 0;
} 
