# include <stdio.h>
# include <malloc.h>

struct Student
{
	int age;
	float score;
	char name[100];
};

int main(void)
{
	int len;
	struct Student *pArr;
	struct Student t;
	int i,j;

	//��̬�Ĺ���һά���� 
	printf("������ѧ���ĸ�����\n");
	printf("len = ");
	scanf("%d",&len);
	pArr = (struct Student *)malloc(len * sizeof(struct Student));
	
	for(i=0;i<len;++i)
	{
		printf("�������%d��ѧ������Ϣ��\n",i+1);
		printf("age = ");
		scanf("%d",&pArr[i].age);
		
		printf("name = ");
		scanf("%s",pArr[i].name); 
		//name����������������Ѿ���������Ԫ�صĵ�ַ,����pArr[i].name ���ܸĳ� &pArr[i].m]name
		
		printf("score = ");
		scanf("%f",&pArr[i].score); 
	 } 
	 
	 //��ѧ���ɼ��������� ð���㷨
	 for(i=0;i<len-1;i++)
	 {
	 	for(j=0;j<len-1-i;j++)
	 	{
	 		if(pArr[j].score>pArr[j+1].score)// >���� 	<���� 
	 		{
	 			t=pArr[j];
	 			pArr[j]=pArr[j+1];
	 			pArr[j+1]=t;
			 }
		 }
	  } 
	  printf("\n\nѧ������Ϣ�ǣ�\n");
	  //���
	  for(i=0;i<len;i++)
	  {
		  printf("��%d��ѧ������Ϣ�ǣ�\n",i+1); 
		  printf("age = %d\n",pArr[i].age); 
		   printf("name = %s\n",pArr[i].name); 
		    printf("score = %f\n",pArr[i].score); 
		    printf("\n");
		}
	
	return 0;
 } 
