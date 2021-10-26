#include <stdio.h>
#include "BookManager.h"

Linklist DelBook_linklist(Linklist L)
{
	int loc,j=0;
	int len;
	len=GETLinklist_len(L);
	LNode *p,*q,*r;
	p=L;
	printf("请输入您要选择删除图书的位置：\n");
	scanf("%d",&loc);
	while(p&&j<loc-1)
	{
		p=p->next;
		j++;
	}
	if(!(p->next)||j>loc-1)
	{
		printf("抱歉，出库位置非法！\n");
		return L;
	}
	if(len==0)
	{
		printf("图书管理库没有书！\n");
		return L;
	}
	q=p->next;p->next=q->next;free(q);
	return L;
}