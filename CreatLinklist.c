#include <stdio.h>
#include "BookManager.h"
#include <malloc.h>

Linklist CreatLinklist(Linklist L)
{
	Linklist p,r;
	int i,length;
	int len=GETLinklist_len(L);
	printf("请输入你要创建书籍的数目：\n");
	scanf("%d",&length);
	L=(Linklist)malloc(sizeof(LNode));
    L->next=NULL;
    r=L;
    for(i=0;i<length;i++)
    {
    	p=(Linklist)malloc(sizeof(LNode));
    	scanf("%s %s %lf",&p->data.id,&p->data.name,&p->data.price); 
    	p->next=NULL;
    	r->next=p;
    	r=p;
	}
	return L;
}