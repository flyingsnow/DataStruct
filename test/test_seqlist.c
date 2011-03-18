#include <stdio.h>
#include <stdlib.h>

#include "seqlist.h"

int main(int argc, char **argv)
{
    seq_list l;
    int i;

   if(OK != list_init(&l)) {
        printf("Init list error!\n");
   }
   for (i = 1; i <= 100; i++)
       list_insert(&l,i,i);

   for(i = 0; i < l.length; i++)
       printf("%3d\n",*(&l.elem[i]));
   return 0;
}
