#include "BookManager.h"
#include <stdio.h>

void PrintList_Sq(Sqlist L)
{	int i;
	printf("��ǰ�����ͼ�����ĿΪ��%d",L.length);
	printf("\n");
	for(i=0;i<=L.length-1;i++)
	{
		printf("���         ����         �۸�                   \n");
		printf("%s            %s          %.2lf\n",L.elem[i].id,L.elem[i].name,L.elem[i].price);
	}
	printf("\n\n");
}