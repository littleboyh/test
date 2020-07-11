#pragma once

constexpr auto num = 10;

typedef struct {
	int data[num];
	int front, rear;
	int size ;
}sequeue;


bool initqueue(sequeue& s);
bool isempty(sequeue& s);