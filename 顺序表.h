#pragma once
constexpr auto maxsize = 5;//�궨���

//��̬����˳��� ����Ϊmaxsize  ��Ϊlength
typedef struct {
	int data[maxsize];
	int length;
}list;


bool initlist(list& a);
bool listinsert(list& l, int i, int e);
bool listdelete(list& l, int i, int& e);
bool listdeletemin(list& l, int& e);
bool listdeletemax(list& l, int& e);