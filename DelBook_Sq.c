#include <stdio.h>
#include "BookManager.h"

void DelBook_Sq(Sqlist *L)
{
	int loc;
	int j;
	printf("请输入您要选择删除图书的位置：\n");
	scanf("%d",&loc);
	if(loc<1||loc>L->length)
	{
		printf("抱歉，出库位置非法！\n");
		return 0;
	}
	if(L->length==0)
	{
		printf("图书管理库没有书！\n");
		return 0;
	}
	for(j=loc;j<=L->length-1;j++)
	{
		L->elem[j-1]=L->elem[j];	
	}
	
	L->length--;
}  