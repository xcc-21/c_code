# include<stdio.h>
#include<string.h>

int main(){
	char str[]={'h','e','l','l','o','\0','a','b','c'};//�ַ����鶨�岢��ʼ��
	//��̬���ֲ����� 
	char *s="lisi";//��lisi���ھ�̬�洢�� ���ǽ��ַ������׵�ַ��ʼ������s������ 
	char dest[16];//�ڴ�ռ�Ҫ���� 
//	dest=str;//error, dest str���ǳ���
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
