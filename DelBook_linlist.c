#include <stdio.h>
#include "BookManager.h"

Linklist DelBook_linklist(Linklist L)
{
	int loc,j=0;
	int len;
	len=GETLinklist_len(L);
	LNode *p,*q,*r;
	p=L;
	printf("��������Ҫѡ��ɾ��ͼ���λ�ã�\n");
	scanf("%d",&loc);
	while(p&&j<loc-1)
	{
		p=p->next;
		j++;
	}
	if(!(p->next)||j>loc-1)
	{
		printf("��Ǹ������λ�÷Ƿ���\n");
		return L;
	}
	if(len==0)
	{
		printf("ͼ������û���飡\n");
		return L;
	}
	q=p->next;p->next=q->next;free(q);
	return L;
}