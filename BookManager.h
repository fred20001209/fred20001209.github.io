#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
 
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

typedef struct
{
	char id[20];
	char name[50];
	double price;
}Book;

typedef struct{
    Book *elem;
    int length;
    int listsize;
}Sqlist;

typedef struct LNode
{
	Book data;
	struct LNode *next;
}LNode,*Linklist;
	
void CreatList_Sq(Sqlist *L);
void PrintList_Sq(Sqlist L);
void SerchMostValue_Sq(Sqlist L);
void AddBook_Sq(Sqlist *L);
void DelBook_Sq(Sqlist *L);

Linklist CreatLinklist(Linklist L);
void PrintLinklist(Linklist L);
Linklist SortLinklist(Linklist L);
int  GETLinklist_len(Linklist L);
Linklist AddBook_linklist(Linklist L);
Linklist DelBook_linklist(Linklist L);