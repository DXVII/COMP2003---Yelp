#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "yelp_bst.h"

//read file
void read_file(int argc, char *argv[]){
	char *filename, s1[NAMESIZE], s2[DATASIZE];
	FILE *f;

	if(argc != VALID_INP) {
		// print error
		printf("File not specified\n");
		exit(EXIT_FAILURE);
	}

	filename = argv[FILE_IND];
	//open file
	if( (f = fopen(filename,"r")) == NULL){
		printf("Empty file\n");
		exit(EXIT_FAILURE);
	}

    
	while( !feof(f) ){
		fscanf(f, "%[^,], %[^\n]", s1, s2);
		printf("%s ---> %s\n", s1, s2);
	}


	fclose(f);
}



// create bst node
bnode_t *create_bnode(int index, char name[], char data[]){
	bnode_t *b_node;
	
	b_node = (bnode_t*)malloc(sizeof(bnode_t));
	b_node->index = index;

	b_node->name = name;
	b_node->data = data

	b_node->left = NULL;
	b_node->right = NULL;
	return b_node;
}

//stage1
void insert_node(bnode_t *b_node, bnode_t *new_node){
	b_node->next = new_node;
}


void print_tree_inorder(bnode_t *bst){
	if(bst->left != NULL){
		return print_tree_inorder(bst->left);
	} 
	printf("%s\n", bst->name);
	
	if(bst->right != NULL){
		return print_tree_inorder(bst->left)
	}
	printf("%s\n", bst->name);
}



//---------------------------------------------------------------- Stage 2 ----------------------------------------------------------------------//

// create link list node
lnode_t *create_lnode(int index, char name[], char data[]){
	lnode_t *l_node;
	
	l_node = (lnode_t*)malloc(sizeof(lnode_t));
	l_node->index = index;

	l_node->name = name;
	l_node->data = data

	l_node->next = NULL;
	return l_node;

