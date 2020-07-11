#include <stdio.h>
#include <stdlib.h>
#include "单链表.h"


//初始化带一个头结点
bool initlinklist(linklist& p) {
	if (p == NULL)
		return false;
	p = (linklist)malloc(sizeof(lnode));
	p->next = NULL;
	printf("单链表: INIT OK\n");
	printf("\n");
	return true;

}




bool emptylinklist(linklist& p) {
	if (p->next == NULL) {
		printf("单链表: NULL\n");
		printf("\n");
		return true;
	}
	else
		printf("单链表: NOT NULL\n");
	    printf("\n");
	    return false;
		
}


linklist headinsert(linklist& p) {
	lnode* s;
	int x;
	printf("单链表进行头插，请输入一个数，若输入值为111111，则插入结束\n");
	scanf_s("%d", &x);
	while (x != 111111) {
		s = (linklist)malloc(sizeof(lnode));
		s->data = x;
		s->next = p->next;
		p->next = s;

		printf("单链表进行头插，请输入一个数，若输入值为111111，则插入结束\n");
		scanf_s("%d", &x);
	}
	return p;
}

linklist tailinsert(linklist& p) {
	lnode* s,* r;
	int x;
	r = p->next;
	printf("单链表进行尾插，请输入一个数，若输入值为111111，则插入结束\n");
	scanf_s("%d", &x);
	while (x != 111111) {
		s = (linklist)malloc(sizeof(lnode));
		s->data = x;
		s->next = r->next;
		r->next = s;
		r = s;

		printf("单链表进行尾插，请输入一个数，若输入值为111111，则插入结束\n");
		scanf_s("%d", &x);
	}
	return p;
}

int length_linklist(linklist l) {
	int i = 0;
	l = l->next;
	while (l != NULL) {
		i++;
		l = l->next;
	}
	printf("单链表的长度为：%d\n", i);
	return i;
}

//获取指定位置的结点
lnode* getnode(linklist p,int i) {
	int x;
	lnode *s;
	if (i > length_linklist(p) ){
		printf("获取结点位置错误超出单链表长度，请输入  ≤%d  的数字\n", length_linklist(p));
	    scanf_s("%d", &x);
	    return getnode(p, x);
	}
	s = p->next;


	while (s != NULL && i > 1){
		s = s->next;
		i--;
	}
	return s;
}



void printflinklist(linklist p) {
	p = p->next;

	while (p != NULL){
		printf("%d  ", p->data);
		p = p->next;
	}
}
/*
dlinklist dheadinsert(dlinklist& q) {
	dnode* s;
	int x;
	printf("双链表进行头插，请输入一个数，若输入值为111111，则插入结束\n");
	scanf_s("%d", &x);
	while (x != 111111) {
		s = (dnode*)malloc(sizeof(dnode));
		s->data = x;
		s->next = q->next;
		dnode(s->prior) = q;
		q->next = s;

		printf("双链表进行头插，请输入一个数，若输入值为111111，则插入结束\n");
		scanf_s("%d", &x);
	}
	return q;
}
*/

//初始化带一个头结点
/*
bool initdlinklist(dlinklist& p) {
	if (p == NULL)
		return false;
	p = (dlinklist)malloc(sizeof(lnode));
	p->next = NULL;
	p->prior = NULL;
	printf("双链表: INIT OK\n");
	printf("\n");
	return true;

}
*/
/*
bool emptydlinklist(dlinklist& p) {
	if (p->next == NULL&&p->prior==NULL) {
		printf("双链表: NULL\n");
		printf("\n");
		return true;
	}
	else
		printf("双链表: NOT NULL\n");
		printf("\n");
	return false;

}
*/
