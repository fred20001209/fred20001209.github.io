#include <stdio.h>
#include "BookManager.h"

void AddBook_Sq(Sqlist *L)
{
	int loc;
	int j;
	printf("��������Ҫѡ�����ͼ���λ�ã�\n");
	scanf("%d",&loc);
	if(loc<1||loc>L->length+1)
	{
		printf("��Ǹ�����λ�÷Ƿ���\n");
		return 0;
	}
	if(L->length==LIST_INIT_SIZE)
	{
		printf("ͼ������������\n");
			return 0;
	}
	for(j=L->length-1;j>=loc-1;j--)
	{
		L->elem[j+1]=L->elem[j];	
	}
	scanf("%s %s %lf",&L->elem[loc-1].id,&L->elem[loc-1].name,&L->elem[loc-1].price); 
	L->length++;
}