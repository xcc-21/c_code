//д���ļ� 
//#include<stdio.h>
//int main()
//{
//	
//	char ch;
//	FILE *fp;//�����ļ�ָ�� 
//	
//	fp=fopen("e:\\����.txt","w");//���ļ� 
//	if(fp==NULL)//�����ļ�ʧ�� 
//	printf("File open error!\n"),exit(1);//�ر����д򿪵��ļ�����ֹ�����ִ��
//	/*
//	�ȼ���:
//	if(fp=fopen("d:\\...txt","w"))=NULL)
//	{
//		printf("���ܴ��ļ�!\n");
//		exit(1);
//	}	
//	*/  
//	printf("���������ɸ��ַ�(@����):\n");
//	ch=getchar();//gets(str);
//	while(ch!='@')//ѭ��д���ļ������@�Ž���
//	{
//		fputc(ch,fp);
//		ch=getchar();
//	}
//	/*
//	while(!feof(stdin))//д�����ַ���,ctrl+z���� 
//	{
//		fputs(str,fp);
//		fputs("\n",fp);//д��س��� 
//		get(str);
//	 } 
//	 */
//	if(fclose(fp))//�ر��ļ� 
//	{
//		printf("Can not close the file~\n");
//		exit(1);
//	}
//	return 0;
// } 
//�����ļ� 
 #include<stdio.h> 
 int main()
 {
 	
 	char ch;
 	//char str[50];//���ڴ洢�ַ��� 
 	FILE *fp;
 	fp=fopen("e:\\����.txt","r");
 	if(fp==NULL)
 	{
	 	printf("\n���ܴ��ļ���");
		exit(1);
	 } 
	 ch=fgetc(fp);
	 //fgets(str,51,fp);//���ļ���50���ֽڵ����ݵ�str������ 
	 while(ch!=EOF)
	 {
	 	putchar(ch);
	 	ch=fgetc(fp);
	  } 
	  /*
	  while(!feof(fp))//ѭ�����ַ�����str���鲢��� 
	  {
	  	printf("%s",str);
	  	fgets(str,50,fp);
	  }
	  */
	  if(fclose(fp))
	  {
	  	printf("���ܹر��ļ���");
		  exit(1); 
	  }
	  return 0;
 }
 /*
 �ַ���д������fputc()�� fgetc()------fputc(ch,fp) -----ch=fgetc(fp)
 �ַ�����д������fputs()�� fgets() -------fputs(str,fp)-----fgets(str,n,fp)//nָ�ַ����� 
 ��ʽ����д����(����)��fscanf()�� fprintf()-----fprintf(fp,��ʽ�����ַ�����������б�)
 										  ------fscanf(fp,��ʽ�����ַ�������������) 
 �����ƶ�д���������ݿ飩��fread()�� fwrite() ---fwrite(buffer,size,count,fp)
 											---freda (buffer,size,count,fp)
 	//buffer��ָ���д�����ݵ�ָ�룬size��Ҫд�����ݿ���ֽ�����countд��ĸ��� 
 */ 
 

