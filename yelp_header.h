
#ifndef Y_BST_H_
#define Y_BST_H_


#define NAMESIZE 65
#define DATASIZE 1465
#define VALID_INP 2
#define FILE_IND 1

typedef struct bnode bnode_t;
struct bnode{
	int index;
	char name[NAMESIZE];
	char data[DATASIZE];
	bnode_t *left;
	bnode_t *right;
	};


typedef struct lnode lnode_t;
struct lnode{
	int index;
	char name[NAMESIZE];
	char data[DATASIZE];
	lnode_t *next;
	//lnode_t *before;
	};


#endif