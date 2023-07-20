#this is a Makefile 

CC=clang
CFLAGS=-Wall

all:
    $(CC) $(cFLAGS) MerkleTree.c 
exec:
    ./func
clean:
  rn-rf func
  rn-rf-exc
