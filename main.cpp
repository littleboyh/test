#include <stdio.h>
#include "˳���.h"
#include "������.h"

int main(void) {
	linklist l;
	lnode* x;
	int m;
	initlinklist(l);
	headinsert(l);
	printflinklist(l);
	x=getnode(l, 20);
	printf("\n");
	printf("%d\n", x->data);

	x = getnode(l, 5);
	printf("\n");
	printf("%d\n", x->data);

	while (1);
	
	return 0;
}
/*list l;
	int x;  //x��Ϊɾ��Ԫ�صķ���ֵ
	if (initlist(l))
		printf("˳����ʼ�����\n");
	listinsert(l, 1, 10);
	printf("��βԪ��Ϊ%d\n", l.data[l.length - 1]);


	listinsert(l, 2, 11);
	printf("��βԪ��Ϊ%d\n", l.data[l.length - 1]);

	listinsert(l, 3, 17);
	printf("��βԪ��Ϊ%d\n", l.data[l.length - 1]);

	listinsert(l, 1, 20);
	printf("��βԪ��Ϊ%d\n", l.data[l.length - 1]);

	listinsert(l, 3, 99);
	printf("��βԪ��Ϊ%d\n", l.data[l.length - 1]);
	printf("\n");

	printf("����Ԫ��Ϊ��");
	for (int i = 0; i < maxsize; i++)
		printf("%d  ", l.data[i]);
		printf("\n");

	listdeletemin(l,x);
	printf("������СԪ��Ϊ��%d",x);
	printf("\n");

	printf("����Ԫ��Ϊ��");
	for (int i = 0; i < maxsize; i++)
		printf("%d  ", l.data[i]);
	printf("\n");



	listdelete(l, 3, x);
	printf("��βԪ��Ϊ%d\n", l.data[l.length - 1]);
	printf("��ɾ��Ԫ��Ϊ%d\n",x);

	listdelete(l, 1, x);
	printf("��βԪ��Ϊ%d\n", l.data[l.length - 1]);
	printf("��ɾ��Ԫ��Ϊ%d\n", x);
	printf("\n");

	printf("����Ԫ��Ϊ��");
	for (int i = 0; i < maxsize; i++)
		printf("%d  ", l.data[i]);*/
