#define MAX 50
typedef struct arlst
{
  int a[MAX];
  int last;
}ARLST;
void init(ARLST *pal);
int append(ARLST *pal,int e);
int delLast(ARLST *pal,int *pe);
void disp(ARLST *pal);