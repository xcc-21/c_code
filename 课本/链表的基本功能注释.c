struct link *sort(struct link *h)//sort����
struct link *reverse(struct link *h)//������
/*
	h=NULL;//����h��Ϊ���� 
*/ 
//����Ľ��ṹ 
// struct link *creat()//�������� 
//void printlink(struct link *h)//�������	//����ʹ��p++����Ϊ�����ڴ浥Ԫ���������ɰ�++���ɺ������ã�ʵ����һ��
//void search(struct link *h )//�������� 
/*struct link *insert(struct link *h)//������ 
	p->next=q->next;//�½���ָ����ָ����ǰ���ĺ��� 
	q->next=p;//�½���ǰ�����ָ����½�� 
	q=p->next;//qָ��Ҫ����λ�õ�ǰ����� 
*/ 
//struct link *delet(struct link *h)//ɾ����� 
{
	struct link *p1,*p2,*q1,*q2;//ͷָ��h��βָ��*q2���½��p1 ,q1Ϊq2����ǰ����� 
	p1=h;//�޸�ͷָ��h 
	p2=p1->next;//p2ָ����һ����� 
	//char ch;//�����򣬱���Ӽ��������һ���ַ�
	//struct link *next;//ָ����ָ����һ����� 
	while(p2)
	{
		p=(struct link *)malloc(sizeof(struct link));//Ϊ���p�����ڴ� 
		if(p1->ch<=p2->ch)
		{
		p1=p2;
		p2=p2->next;
		}
		else
		{
			p1->next=p2->next;//��������ɾ��p2ָ��Ľ��
			//���³���ʵ�ֽ�p2ָ��Ľڵ����������
			q1=h;//Ϊ���������� 
			q2=q1->next;
			if(p2->ch<h->ch)
			{
				p2->next=h;//������������ 
				h=p2;//ָ��hָ������ 
			 } 
		else
		{
			q1=h;
			q2=h->next;
			while(p2->ch>q2->ch)
			{
				q1=q2;
				q2=q2->next;//q2ָ����һ����� 
			}
			p2->next=q2;//Ϊ���������������� 
			q1->next=p2;
		 }	 
		 p2=p1->next;
		}
	}free(h)//�ͷŴ洢��Ԫ�ռ� 
	return h;//��������ϣ�����ͷָ��h 
 } 


