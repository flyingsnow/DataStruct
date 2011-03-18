#include "../lib/inc/Seqlist.h"

int main(int argc, char **argv)
{
    SeqList l;
    int i;

    InitList(&l); 
    
    for(i = 0; i <= 10 ; i++)
        InsertList(&l,i,i);
    DeletList(&l,5);
    DeletList(&l,5);
    printf("out put :\n");

    for(i = 0; i <= l.length; i++)
        printf("%d\n",l.data[i]);
                
    return 0;
}

