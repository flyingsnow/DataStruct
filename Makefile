CC = gcc
DEBUG = -g

ifndef LIB_DIR
export LIB_DIR = $(PWD)/lib
endif

CFG_INC = -I$(LIB_DIR)/inc

COMMN_FILES = $(LIB_DIR)/src/Seqlist.c

all:
	make -C test

clean:
	make -C test clean
