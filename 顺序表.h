#pragma once
constexpr auto maxsize = 5;//宏定义表长

//静态分配顺序表 容量为maxsize  表长为length
typedef struct {
	int data[maxsize];
	int length;
}list;


bool initlist(list& a);
bool listinsert(list& l, int i, int e);
bool listdelete(list& l, int i, int& e);
bool listdeletemin(list& l, int& e);
bool listdeletemax(list& l, int& e);