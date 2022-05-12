//写入文件 
//#include<stdio.h>
//int main()
//{
//	
//	char ch;
//	FILE *fp;//定义文件指针 
//	
//	fp=fopen("e:\\。。.txt","w");//打开文件 
//	if(fp==NULL)//处理文件失败 
//	printf("File open error!\n"),exit(1);//关闭所有打开的文件，终止程序的执行
//	/*
//	等价于:
//	if(fp=fopen("d:\\...txt","w"))=NULL)
//	{
//		printf("不能打开文件!\n");
//		exit(1);
//	}	
//	*/  
//	printf("请输入若干个字符(@结束):\n");
//	ch=getchar();//gets(str);
//	while(ch!='@')//循环写入文件，输出@号结束
//	{
//		fputc(ch,fp);
//		ch=getchar();
//	}
//	/*
//	while(!feof(stdin))//写入多个字符串,ctrl+z结束 
//	{
//		fputs(str,fp);
//		fputs("\n",fp);//写入回车符 
//		get(str);
//	 } 
//	 */
//	if(fclose(fp))//关闭文件 
//	{
//		printf("Can not close the file~\n");
//		exit(1);
//	}
//	return 0;
// } 
//读出文件 
 #include<stdio.h> 
 int main()
 {
 	
 	char ch;
 	//char str[50];//用于存储字符串 
 	FILE *fp;
 	fp=fopen("e:\\。。.txt","r");
 	if(fp==NULL)
 	{
	 	printf("\n不能打开文件！");
		exit(1);
	 } 
	 ch=fgetc(fp);
	 //fgets(str,51,fp);//读文件中50个字节的内容到str数组中 
	 while(ch!=EOF)
	 {
	 	putchar(ch);
	 	ch=fgetc(fp);
	  } 
	  /*
	  while(!feof(fp))//循环读字符串到str数组并输出 
	  {
	  	printf("%s",str);
	  	fgets(str,50,fp);
	  }
	  */
	  if(fclose(fp))
	  {
	  	printf("不能关闭文件！");
		  exit(1); 
	  }
	  return 0;
 }
 /*
 字符读写函数；fputc()和 fgetc()------fputc(ch,fp) -----ch=fgetc(fp)
 字符串读写函数：fputs()和 fgets() -------fputs(str,fp)-----fgets(str,n,fp)//n指字符个数 
 格式化读写函数(数组)：fscanf()和 fprintf()-----fprintf(fp,格式控制字符串，输出项列表)
 										  ------fscanf(fp,格式控制字符串，输出项表列) 
 二进制读写函数（数据块）：fread()和 fwrite() ---fwrite(buffer,size,count,fp)
 											---freda (buffer,size,count,fp)
 	//buffer是指向代写入数据的指针，size是要写入数据块的字节数，count写入的个数 
 */ 
 

