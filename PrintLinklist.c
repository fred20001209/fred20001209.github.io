#include <stdio.h>
#include "BookManager.h"

void PrintLinklist(Linklist L)
{
	Linklist p=L->next;
	while(p!=NULL)
	{
		printf("书号         书名         价格                   \n");
		printf("%s            %s          %.2lf\n",p->data.id,p->data.name,p->data.price);
		p=p->next;
	}        
	printf("\n\n");
}

int  GETLinklist_len(Linklist L)
{
	LNode *p;
	p=L->next;
	int i=0;
	while(p)
	{
		i++;
		p=p->next;
	}
	return i;
}