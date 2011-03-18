CC = gcc 

ifndef LIB_DIR
export LIB_DIR = $(PWD)/lib
endif

CFG_INC = -I$(LIB_DIR)/inc

CFLAGS = -g

COMMN_FILES = $(LIB_DIR)/src/seqlist.c

export CFG_INC COMMN_FILES CFLAGS
all:
	make -C test

clean:
	make -C test clean
