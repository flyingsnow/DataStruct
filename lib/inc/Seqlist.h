#ifndef _LIST_H
#define _LIST_H

#include "commn.h"

#define ListSize    100

typedef int data_type;

typedef struct {
    data_type data[ListSize];
    int length;
}SeqList;


void InitList(SeqList *L);

int ListLength(SeqList *L);

//data_type GetNode(SeqList L, int i);

void InsertList(SeqList *L, data_type x, int i);

void DeletList(SeqList *L, int i);



#endif 
