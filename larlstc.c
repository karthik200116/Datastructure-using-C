#include<stdio.h>
#include"larlst.h"
main()
{
  ARLST lstobj;//a,last
   int choice,e,ele,k;
  init(&lstobj);//last=-1
  do{
     printf("1 append 2 delete 3 disp\n");
     printf("enter your choice");
     scanf("%d",&choice);
     switch(choice)
      {
       case 1:printf("enter the ele");
              scanf("%d",&ele);
              int s=append(&lstobj,ele);
              if(s) printf("appended");
              else printf("failed");
              break;
       case 2:  k=delLast(&lstobj,&e);
                if(k==0) printf("empty");
                else
                 printf("deleted ele %d",e);
                break;
       case 3: disp(&lstobj);
               break; 
     }}while(choice<4);
}
   