#include <stdio.h>
#include "ѭ������.h"


bool initqueue(sequeue& s) {
	s.front = s.rear = s.size = 0;
	printf("%d", s.size);
	return true;
}

bool isempty(sequeue& s) {
	if (s.size == 0)
		printf("˳�����Ϊ��\n");
		return true;

		printf("˳����в�Ϊ��\n");
		return false;
}