#pragma once

//单链表的结构体定义
typedef struct lnode{
	int data;
	struct lnode* next;

}lnode,*linklist;

//双链表的结构体定义
/*
typedef struct dnode{
	int data;
	struct lnode* next,*prior;

}dnode, * dlinklist;
*/


bool initlinklist(linklist& p);
linklist headinsert(linklist& p);
linklist tailinsert(linklist& p);
int length_linklist(linklist l);
lnode* getnode(linklist p, int i);
void printflinklist(linklist p);
