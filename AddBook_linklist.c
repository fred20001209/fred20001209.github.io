#include <stdio.h>
#include "BookManager.h"
#include <malloc.h>

Linklist AddBook_linklist(Linklist L)
{
	int loc;
	int j=0;
	LNode *p,*s;
	p=L;
	printf("��������Ҫѡ�����ͼ���λ�ã�\n");
	scanf("%d",&loc);
	while(p&&j<loc-1)
	{
		p=p->next;
		j++;
	}
	if(!p||j>loc-1)
	{
		printf("��Ǹ�����λ�÷Ƿ���\n");
		return L;
	}
	s=(Linklist)malloc(sizeof(LNode));
	scanf("%s %s %lf",&s->data.id,&s->data.name,&s->data.price); 
	s->next=p->next;p->next=s;
	return L;
}