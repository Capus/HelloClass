#include "helloclass.h"
#include <iostream>
using std::cout;
using std::endl;

HelloClass::HelloClass()
{
	cout<<"I am being created."<<endl;
}

HelloClass::~HelloClass()
{
	cout<<"I am being destroyed."<<endl;
}

void HelloClass::sayHello()
{
	cout<<"Hello Class!"<<endl;
}

