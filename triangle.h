#pragma once
#include "shape.h"
#include<iostream>
using namespace std;
class triangle :
	public shape
{
private:
	int length;
	char assciii;
	int height;
	bool flagg;
public:
	triangle();
	triangle(int,char,int,bool);
	triangle(const triangle&t);
	void settl(int);
	void settc(char);
	void setth(int);
	void settb(bool);
	void setprivatel(int, char);
	int gettl();
	char gettc();
	int getth();
	bool gettb();
	int getshape1();
	char getshape2();
	void read();
	void display();
	void render();
	void operator =(const  triangle &t);
	bool operator ==(const triangle&t);
	bool operator !=(const triangle&t);
	triangle &operator ++();
	triangle &operator --();
	triangle operator++(int);
	triangle operator--(int);
	triangle operator+(triangle&);
	friend ostream &operator<<(ostream & output, triangle&);
	friend istream & operator >>(istream & input,triangle &);
	~triangle();
};

