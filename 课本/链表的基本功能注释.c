struct link *sort(struct link *h)//sort排序
struct link *reverse(struct link *h)//链表倒序
/*
	h=NULL;//链表h置为空链 
*/ 
//链表的结点结构 
// struct link *creat()//创建链表 
//void printlink(struct link *h)//输出链表	//不能使用p++，因为链表内存单元不连续，可把++当成函数调用，实现下一个
//void search(struct link *h )//查找链表 
/*struct link *insert(struct link *h)//插入结点 
	p->next=q->next;//新结点的指针域指向其前趋的后结点 
	q->next=p;//新结点的前趋结点指向该新结点 
	q=p->next;//q指向要插入位置的前趋结点 
*/ 
//struct link *delet(struct link *h)//删除结点 
{
	struct link *p1,*p2,*q1,*q2;//头指针h，尾指针*q2，新结点p1 ,q1为q2结点的前趋结点 
	p1=h;//修改头指针h 
	p2=p1->next;//p2指向下一个结点 
	//char ch;//数据域，保存从键盘输入的一个字符
	//struct link *next;//指针域，指向下一个结点 
	while(p2)
	{
		p=(struct link *)malloc(sizeof(struct link));//为结点p分配内存 
		if(p1->ch<=p2->ch)
		{
		p1=p2;
		p2=p2->next;
		}
		else
		{
			p1->next=p2->next;//从链表中删除p2指向的结点
			//以下程序实现将p2指向的节点插入链表中
			q1=h;//为结点读入数据 
			q2=q1->next;
			if(p2->ch<h->ch)
			{
				p2->next=h;//将结点插入链首 
				h=p2;//指针h指向链首 
			 } 
		else
		{
			q1=h;
			q2=h->next;
			while(p2->ch>q2->ch)
			{
				q1=q2;
				q2=q2->next;//q2指向下一个结点 
			}
			p2->next=q2;//为结点数据域读入数据 
			q1->next=p2;
		 }	 
		 p2=p1->next;
		}
	}free(h)//释放存储单元空间 
	return h;//链表创建完毕，返回头指针h 
 } 


