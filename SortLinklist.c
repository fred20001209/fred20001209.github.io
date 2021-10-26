#include <stdio.h>
#include "BookManager.h"

Linklist SortLinklist(Linklist L)
{
    
    Book temp;
    Linklist p,q;
     for (p = L->next; p != NULL; p = p->next)
         for (q = p->next; q != NULL; q = q->next)
             if (p->data.price < q->data.price)
             {
               	temp = p->data; 
				 p->data= q->data;
				 q->data = temp;
            }
     
    return L;
}
