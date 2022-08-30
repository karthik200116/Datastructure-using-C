typedef struct node
{
 int info;
 struct node *next;
}NODE;
typedef struct llist
{
 NODE *head;
}LLIST;
void init(LLIST *pl);
int insertFirst(LLIST *pl,int e);
int insertLast(LLIST *pl,int e);
int delFirst(LLIST *pl,int *pe);
int delLast(LLIST *pl,int *pe);
void disp(LLIST *pl);
