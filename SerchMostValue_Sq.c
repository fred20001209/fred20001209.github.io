#include <stdio.h>
#include "BookManager.h"

void SerchMostValue_Sq(Sqlist L)
{
	double Max;
	int i,cnt=0;
	Max=L.elem[0].price;
	for(i=1;i<L.length;i++)
	{
		if(L.elem[i].price>Max)
		{
			Max=L.elem[i].price;
		}
	}
	for(i=0;i<L.length;i++)
	{
		if(L.elem[i].price==Max)
		{
			cnt++;
		}
	}
	printf("%d",cnt);
	printf("\n");
		for(i=0;i<L.length;i++)
	{
		if(L.elem[i].price==Max)
		{
		  printf("%s %s %.2lf",L.elem[i].id,L.elem[i].name,L.elem[i].price);
		  printf("\n");
		}
	}
}