#include <stdio.h>
#include <stdlib.h>
int main()
{
     int *name=(int *)malloc(10*sizeof(int));
     for(int i=0;i<=9;i++){
      name[i]=i+1;}
     for(int i=0;i<=10;i++){
     printf("%d\n",name[i]);}
     free(name);
     printf("%d\n",name[1]);
     return 0;
}
