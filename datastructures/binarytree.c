#include<stdio.h>
#include<stdlib.h>
typedef struct node *treeptr;
typedef struct node {
	int data;
	treeptr lc;
	treeptr rc;
}node;
