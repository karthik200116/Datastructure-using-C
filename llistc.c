#include<stdio.h>
#include"llist.h"
int main()
{
 LLIST lobj;
 int choice,e,k; 
 init(&lobj);
 do
  {
   printf("\n1 IFront 2 ILast 3 DF 4. DL 5 Disp\n");
   printf("Enter your choice\n");
   scanf("%d",&choice);
   switch(choice)
    {
     case 1:printf("enter the ele");
            scanf("%d",&e);
            insertFirst(&lobj,e);
            break;
     case 2:printf("enter the ele");
            scanf("%d",&e);
            insertLast(&lobj,e);
            break;
     case 3:k=delFirst(&lobj,&e);
            if(k==0) printf("list empty");
            else printf("del ele is %d",e);
            break;
     case 4:k=delLast(&lobj,&e);
            if(k==0) printf("list empty");
            else printf("del ele is %d",e);
            break;
     case 5:disp(&lobj);
            break;
     }
    }while(choice<6);
 }