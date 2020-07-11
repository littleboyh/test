#include "stdio.h"
#include "顺序表.h"
/*静态分配顺序表
		优点：1.存储密度大，空间利用率高
			  2.由于分配连续的存储区域，可实现随机存取方式，在O(1)时间内
		缺点：1.插入删除操作需要O(n)的时间复杂度，需要将插入位置后的元素全部后移，删除位置后的元素全部前移
			  2.表中长度固定，所以容易造成数据溢出
	  注意点：顺序表插入位置的范围是[1，maxsize]
			  顺序表中数据的下标位置范围是[0,maxsize-1]
			  */



//初始化一个顺序表 表中所有元素都置为0 表长length为0
bool initlist(list &l){
	for (int i = 0; i < maxsize; i++)
		l.data[i] = 0;
	l.length = 0;
	return true;
}

//在顺序表的第i个位置（i∈[1,maxsize]），插入一个元素e
bool listinsert(list &l, int i,int e) {
	if (i<1 || i>l.length + 1) {
		printf("插入位置错误，不符合顺序表的逻辑结构\n");
		printf("\n");
		return false;
	}
		
	if (i > maxsize) {
		printf("插入位置错误，超出表的容量\n");
		printf("\n");
		return false;
	}
	
	for (int j = l.length; j >= i; j--) {
		l.data[j] = l.data[j - 1];
	}
	l.data[i-1] = e;
	l.length++;
	printf("插入成功，此时表长为%d\n", l.length);  
	printf("\n");
		return true;
}


//删除顺序表上第i个位置的元素，并用返回值返回删除元素的值
bool listdelete(list& l, int i, int& e) {
	if (i<1 || i>l.length) {
		printf("删除位置错误，超出可删除的范围\n");
		printf("\n");
		return false;
	}

	e = l.data[i - 1];
	for (int j = i; j < l.length; j++) {
		l.data[j-1] = l.data[j];
	}
	l.data[l.length - 1] = 0;                    //原表长为length,将第length位置0，进行复位
	l.length--;
	printf("删除成功，此时表长为%d\n", l.length);
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
	printf("k的值为%d\n", k);//此处k的值是数组的下标
	e = l.data[k];
	printf("返回值为%d\n", e);
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
	printf("k的值为%d\n", k);        //此处k的值是数组的下标
	e = l.data[k];
	printf("返回值为%d\n", e);
	for (int j = k; j < l.length; j++) {
		l.data[j] = l.data[j + 1];
	}
	l.data[l.length - 1] = 0;
	l.length--;
	return true;
}
