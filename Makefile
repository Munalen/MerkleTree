#this is a Makefile 

CC=gcc
CFLAGS=-Wall

all:
	$(CC) $(cFLAGS) MerkleTree.c 

exec:
	./func

clean:
	rn-rf func
	rn-rf-exc
