#include <stdio.h>
#include <stdlib.h>
#include "������.h"


//��ʼ����һ��ͷ���
bool initlinklist(linklist& p) {
	if (p == NULL)
		return false;
	p = (linklist)malloc(sizeof(lnode));
	p->next = NULL;
	printf("������: INIT OK\n");
	printf("\n");
	return true;

}




bool emptylinklist(linklist& p) {
	if (p->next == NULL) {
		printf("������: NULL\n");
		printf("\n");
		return true;
	}
	else
		printf("������: NOT NULL\n");
	    printf("\n");
	    return false;
		
}


linklist headinsert(linklist& p) {
	lnode* s;
	int x;
	printf("���������ͷ�壬������һ������������ֵΪ111111����������\n");
	scanf_s("%d", &x);
	while (x != 111111) {
		s = (linklist)malloc(sizeof(lnode));
		s->data = x;
		s->next = p->next;
		p->next = s;

		printf("���������ͷ�壬������һ������������ֵΪ111111����������\n");
		scanf_s("%d", &x);
	}
	return p;
}

linklist tailinsert(linklist& p) {
	lnode* s,* r;
	int x;
	r = p->next;
	printf("���������β�壬������һ������������ֵΪ111111����������\n");
	scanf_s("%d", &x);
	while (x != 111111) {
		s = (linklist)malloc(sizeof(lnode));
		s->data = x;
		s->next = r->next;
		r->next = s;
		r = s;

		printf("���������β�壬������һ������������ֵΪ111111����������\n");
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
	printf("������ĳ���Ϊ��%d\n", i);
	return i;
}

//��ȡָ��λ�õĽ��
lnode* getnode(linklist p,int i) {
	int x;
	lnode *s;
	if (i > length_linklist(p) ){
		printf("��ȡ���λ�ô��󳬳��������ȣ�������  ��%d  ������\n", length_linklist(p));
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
	printf("˫�������ͷ�壬������һ������������ֵΪ111111����������\n");
	scanf_s("%d", &x);
	while (x != 111111) {
		s = (dnode*)malloc(sizeof(dnode));
		s->data = x;
		s->next = q->next;
		dnode(s->prior) = q;
		q->next = s;

		printf("˫�������ͷ�壬������һ������������ֵΪ111111����������\n");
		scanf_s("%d", &x);
	}
	return q;
}
*/

//��ʼ����һ��ͷ���
/*
bool initdlinklist(dlinklist& p) {
	if (p == NULL)
		return false;
	p = (dlinklist)malloc(sizeof(lnode));
	p->next = NULL;
	p->prior = NULL;
	printf("˫����: INIT OK\n");
	printf("\n");
	return true;

}
*/
/*
bool emptydlinklist(dlinklist& p) {
	if (p->next == NULL&&p->prior==NULL) {
		printf("˫����: NULL\n");
		printf("\n");
		return true;
	}
	else
		printf("˫����: NOT NULL\n");
		printf("\n");
	return false;

}
*/
