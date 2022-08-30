#include "llist.h"
#include<stdio.h>
#include<stdlib.h>

void init(LLIST *pl)
{
 pl->head=NULL;
}
int insertFirst(LLIST *pl,int e)
{
  NODE *temp;
  temp=(NODE*)malloc(sizeof(NODE));
  temp->info=e;
  temp->next=pl->head;
  pl->head=temp;
} 
  
int insertLast(LLIST *pl,int e)
{
	NODE *temp,*p;
	
	temp=(NODE*)malloc(sizeof(NODE));
	if(temp==NULL)
		return 0;
	
	temp->info=e;
	temp->next=NULL;
	
	p=pl->head;
	if(p==NULL)
		pl->head=temp;
	else
	{
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
	return 1;
}
int delFirst(LLIST *pl,int *pe)
{
	NODE *p=pl->head;
	if(pl->head==NULL) return 0;
	pl->head=p->next;
	*pe=p->info;
	free(p);
	return 1;
}
int delLast(LLIST *pl,int *pe)
{
	NODE *p,*q;
	if(pl->head==NULL) return 0;
	p=pl->head;
	if(p->next==NULL)	//single node
	{
		*pe=p->info;
		free(p);
		pl->head=NULL;
		return 1;
	}
	else		//multiple nodes
	{
		q=NULL;
		while(p->next!=NULL)
		{
			q=p;
			p=p->next;
		}
		q->next=NULL;
		*pe=p->info;
		free(p);
	}
	return 1;	
}
void disp(LLIST *pl)
{
	if(pl->head==NULL)
		printf("Empty List\n");
	else
	{
		NODE *p=pl->head;
		while(p!=NULL)
		{
			printf("%d ",p->info);
			p=p->next;
		}
	}
}