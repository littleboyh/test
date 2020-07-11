#include "stdio.h"
#include "˳���.h"
/*��̬����˳���
		�ŵ㣺1.�洢�ܶȴ󣬿ռ������ʸ�
			  2.���ڷ��������Ĵ洢���򣬿�ʵ�������ȡ��ʽ����O(1)ʱ����
		ȱ�㣺1.����ɾ��������ҪO(n)��ʱ�临�Ӷȣ���Ҫ������λ�ú��Ԫ��ȫ�����ƣ�ɾ��λ�ú��Ԫ��ȫ��ǰ��
			  2.���г��ȹ̶���������������������
	  ע��㣺˳������λ�õķ�Χ��[1��maxsize]
			  ˳��������ݵ��±�λ�÷�Χ��[0,maxsize-1]
			  */



//��ʼ��һ��˳��� ��������Ԫ�ض���Ϊ0 ��lengthΪ0
bool initlist(list &l){
	for (int i = 0; i < maxsize; i++)
		l.data[i] = 0;
	l.length = 0;
	return true;
}

//��˳���ĵ�i��λ�ã�i��[1,maxsize]��������һ��Ԫ��e
bool listinsert(list &l, int i,int e) {
	if (i<1 || i>l.length + 1) {
		printf("����λ�ô��󣬲�����˳�����߼��ṹ\n");
		printf("\n");
		return false;
	}
		
	if (i > maxsize) {
		printf("����λ�ô��󣬳����������\n");
		printf("\n");
		return false;
	}
	
	for (int j = l.length; j >= i; j--) {
		l.data[j] = l.data[j - 1];
	}
	l.data[i-1] = e;
	l.length++;
	printf("����ɹ�����ʱ��Ϊ%d\n", l.length);  
	printf("\n");
		return true;
}


//ɾ��˳����ϵ�i��λ�õ�Ԫ�أ����÷���ֵ����ɾ��Ԫ�ص�ֵ
bool listdelete(list& l, int i, int& e) {
	if (i<1 || i>l.length) {
		printf("ɾ��λ�ô��󣬳�����ɾ���ķ�Χ\n");
		printf("\n");
		return false;
	}

	e = l.data[i - 1];
	for (int j = i; j < l.length; j++) {
		l.data[j-1] = l.data[j];
	}
	l.data[l.length - 1] = 0;                    //ԭ��Ϊlength,����lengthλ��0�����и�λ
	l.length--;
	printf("ɾ���ɹ�����ʱ��Ϊ%d\n", l.length);
	printf("\n");
	return true;
}


bool listdeletemin(list& l, int& e) {
	int k=0;
	if(l.length<=0)
		return false;

	for (int j = 1; j < l.length; j++){
		if (l.data[k] > l.data[j])
			k = j;
	}
	printf("k��ֵΪ%d\n", k);//�˴�k��ֵ��������±�
	e = l.data[k];
	printf("����ֵΪ%d\n", e);
	for (int j = k; j < l.length; j++) {
		l.data[j ] = l.data[j+1];
	}
	l.data[l.length - 1] = 0;
	l.length--;
	return true;
}

bool listdeletemax(list& l, int& e) {
	int k = 0;
	if (l.length == 0)
		return false;

	for (int j = 1; j < l.length; j++) {
		if (l.data[k] < l.data[j])
			k = j;
	}
	printf("k��ֵΪ%d\n", k);        //�˴�k��ֵ��������±�
	e = l.data[k];
	printf("����ֵΪ%d\n", e);
	for (int j = k; j < l.length; j++) {
		l.data[j] = l.data[j + 1];
	}
	l.data[l.length - 1] = 0;
	l.length--;
	return true;
}
