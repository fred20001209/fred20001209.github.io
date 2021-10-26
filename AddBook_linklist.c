#include <stdio.h>
#include "BookManager.h"
#include <malloc.h>

Linklist AddBook_linklist(Linklist L)
{
	int loc;
	int j=0;
	LNode *p,*s;
	p=L;
	printf("请输入您要选择插入图书的位置：\n");
	scanf("%d",&loc);
	while(p&&j<loc-1)
	{
		p=p->next;
		j++;
	}
	if(!p||j>loc-1)
	{
		printf("抱歉，入库位置非法！\n");
		return L;
	}
	s=(Linklist)malloc(sizeof(LNode));
	scanf("%s %s %lf",&s->data.id,&s->data.name,&s->data.price); 
	s->next=p->next;p->next=s;
	return L;
}