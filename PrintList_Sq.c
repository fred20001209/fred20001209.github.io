#include "BookManager.h"
#include <stdio.h>

void PrintList_Sq(Sqlist L)
{	int i;
	printf("当前书库中图书的数目为：%d",L.length);
	printf("\n");
	for(i=0;i<=L.length-1;i++)
	{
		printf("书号         书名         价格                   \n");
		printf("%s            %s          %.2lf\n",L.elem[i].id,L.elem[i].name,L.elem[i].price);
	}
	printf("\n\n");
}