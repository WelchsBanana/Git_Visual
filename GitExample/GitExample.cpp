#include<iostream>
#include"Function.h"

using namespace std;

void main()
{
	Function *function = new Function;// °´Ã¼ »ý¼º
	int num = function->sum(10, 20);

	cout << num;

}