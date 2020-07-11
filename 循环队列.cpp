#include <stdio.h>
#include "循环队列.h"


bool initqueue(sequeue& s) {
	s.front = s.rear = s.size = 0;
	printf("%d", s.size);
	return true;
}

bool isempty(sequeue& s) {
	if (s.size == 0)
		printf("顺序队列为空\n");
		return true;

		printf("顺序队列不为空\n");
		return false;
}