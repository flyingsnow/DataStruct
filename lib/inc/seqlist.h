#ifndef _LIST_H
#define _LIST_H

#include "commn.h"

#define LIST_INIT_SIZE 100
#define LIST_INCREMENT 10

typedef struct {
    data_type *elem; 
    int length;
    int listsize;
}seq_list;

status list_init(seq_list *L);

int list_length(seq_list *L);

status list_insert(seq_list *L, data_type x, int i);

status list_delete(seq_list *L, int i);

#endif 
