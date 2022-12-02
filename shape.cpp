#include "shape.h"
#include<iostream>
using namespace std;
shape::shape()
{
	length = 0;
	asscii = '\0';
	//cout << "call from shape constrctor\n";
}
shape::shape(int leng, char assci)
{
	length = leng;
	asscii = assci;
	//cout << "call from shape parameterized constructor\n";
}
shape::shape(const shape &s)
{
	length = s.length;
	asscii = s.asscii;
	//cout << "call from shape copy constructor\n";
}
void shape::setter(int leng, char assci)
{
	length = leng;
	asscii = assci;
}
int shape::getter1()
{
	return length;
}
char shape::getter2()
{
	return asscii;
}
shape::~shape()
{
	//cout << "call from shape destructor\n";
}
