#include "larlst.h"
#include <stdio.h>
void init(ARLST *pal)
{
  pal->last=-1;
}
int append(ARLST *pal,int e)
{
  if(pal->last==MAX-1) return 0;
  pal->last++;
  pal->a[pal->last]=e;
  return 1;
 }
int delLast(ARLST *pal,int *pe)
{
  if(pal->last==-1) return 0;
    *pe=pal->a[pal->last--];
   return 1;

}
void disp(ARLST *pal)
{
  if(pal->last==-1)
    printf("empty");
  else
    {
      int i=0;
      while(i<=pal->last)
        {
          printf("%d ",pal->a[i]);
          i++;
         }
      }
   }    