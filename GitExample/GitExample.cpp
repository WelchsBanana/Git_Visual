#include<iostream>
#include"Function.h"

using namespace std;

void main()
{
	Function *function = new Function;// ��ü ����
	int num = function->sum(10, 20);

	cout << num;

}