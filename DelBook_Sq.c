#include <stdio.h>
#include "BookManager.h"

void DelBook_Sq(Sqlist *L)
{
	int loc;
	int j;
	printf("��������Ҫѡ��ɾ��ͼ���λ�ã�\n");
	scanf("%d",&loc);
	if(loc<1||loc>L->length)
	{
		printf("��Ǹ������λ�÷Ƿ���\n");
		return 0;
	}
	if(L->length==0)
	{
		printf("ͼ������û���飡\n");
		return 0;
	}
	for(j=loc;j<=L->length-1;j++)
	{
		L->elem[j-1]=L->elem[j];	
	}
	
	L->length--;
}  