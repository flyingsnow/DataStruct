#include <stdio.h>
#include <stdlib.h>

#include "seqlist.h"


//Initialization list
status list_init(seq_list *L)
{
    //construct a seq list
    L->elem = (data_type *)malloc(LIST_INIT_SIZE*sizeof(data_type));
    if(!L->elem)
        exit(OVERFLOW);
    L->length = 0;
    L->listsize = LIST_INIT_SIZE;
    return OK;
}


//get the lenght of list
int list_length(seq_list *L)
{
   return L->length;
}

//insert element into list
status list_insert(seq_list *L, data_type x, int i)
{
    data_type *temp;
    data_type *p, *q;

    if(i < 1 || i > L->length + 1)
        return ERROR;

    if(L->length >= L->listsize) {
        temp = (data_type *)realloc(L->elem,
           (L->listsize + LIST_INCREMENT) * sizeof(data_type));
        if(!temp)
            exit(OVERFLOW);
        L->elem = temp;
        L->listsize += LIST_INCREMENT;
    }

    q = &(L->elem[i-1]);
    
    for(p = &(L->elem[L->length -1]); p >= q; p--)
        *(p+1) = *p;
    
    *q = x;
    L->length++;
    return OK;
}

void list_delete(seq_list *L, int i)
{

}



