#include <stdio.h>
#include "顺序表.h"
#include "单链表.h"

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
	int x;  //x作为删除元素的返回值
	if (initlist(l))
		printf("顺序表初始化完成\n");
	listinsert(l, 1, 10);
	printf("表尾元素为%d\n", l.data[l.length - 1]);


	listinsert(l, 2, 11);
	printf("表尾元素为%d\n", l.data[l.length - 1]);

	listinsert(l, 3, 17);
	printf("表尾元素为%d\n", l.data[l.length - 1]);

	listinsert(l, 1, 20);
	printf("表尾元素为%d\n", l.data[l.length - 1]);

	listinsert(l, 3, 99);
	printf("表尾元素为%d\n", l.data[l.length - 1]);
	printf("\n");

	printf("表中元素为：");
	for (int i = 0; i < maxsize; i++)
		printf("%d  ", l.data[i]);
		printf("\n");

	listdeletemin(l,x);
	printf("表中最小元素为：%d",x);
	printf("\n");

	printf("表中元素为：");
	for (int i = 0; i < maxsize; i++)
		printf("%d  ", l.data[i]);
	printf("\n");



	listdelete(l, 3, x);
	printf("表尾元素为%d\n", l.data[l.length - 1]);
	printf("被删除元素为%d\n",x);

	listdelete(l, 1, x);
	printf("表尾元素为%d\n", l.data[l.length - 1]);
	printf("被删除元素为%d\n", x);
	printf("\n");

	printf("表中元素为：");
	for (int i = 0; i < maxsize; i++)
		printf("%d  ", l.data[i]);*/
