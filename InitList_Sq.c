#include "BookManager.h"
#include <stdio.h>
#include <malloc.h>

void CreatList_Sq(Sqlist *L)
{
	int n;
	int i;
	printf("��������Ҫ�����鼮����Ŀ��\n");
	scanf("%d",&n);
	L->length=n;
    L->elem=(Book*) malloc( LIST_INIT_SIZE*sizeof(Book));
    for(i=0;i<n;i++)
    {
		scanf("%s %s %lf",&L->elem[i].id,&L->elem[i].name,&L->elem[i].price); 
	}  
	
}
