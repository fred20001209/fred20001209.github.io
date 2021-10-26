#include <stdio.h>
#include "BookManager.h"

void AddBook_Sq(Sqlist *L)
{
	int loc;
	int j;
	printf("请输入您要选择插入图书的位置：\n");
	scanf("%d",&loc);
	if(loc<1||loc>L->length+1)
	{
		printf("抱歉，入库位置非法！\n");
		return 0;
	}
	if(L->length==LIST_INIT_SIZE)
	{
		printf("图书管理库已满！\n");
			return 0;
	}
	for(j=L->length-1;j>=loc-1;j--)
	{
		L->elem[j+1]=L->elem[j];	
	}
	scanf("%s %s %lf",&L->elem[loc-1].id,&L->elem[loc-1].name,&L->elem[loc-1].price); 
	L->length++;
}