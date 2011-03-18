

#include <stdio.h>
#include <stdlib.h>

#include "../inc/Seqlist.h"

void InitList(SeqList *L)
{
    L->length = 0;
}



int ListLength(SeqList *L)
{
    return L->length;
}


void InsertList(SeqList *L, data_type x, int i)
{
    int j;
    if(i<1 ||i>L->length+1){
        printf("position error\n");
        return ;
    }
    if(L->length >= ListSize) {
        printf("overflow\n");
        return ;
    }
    for(j = L->length-1; j > i-1; j--) {
        L->data[j+1] = L->data[j];
    }
    L->data[i-1] = x;
    L->length++;


}

void DeletList(SeqList *L, int i)
{
    int j;
    if(i<1 ||i>L->length+1){
        printf("position error\n!");
        return ;
    }
    for( j = i ; j < L->length; j++) {
        L->data[j] = L->data[j+1];
    }
    L->length--;
}


