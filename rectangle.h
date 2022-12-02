#pragma once
#include "shape.h"
using namespace std;
#include<iostream>
class rectangle :
	public shape
{
private:
	int length;
	char asscii;
	int width;
	bool check;
public:
	rectangle();
	rectangle(int, char, int, bool);
	rectangle(const rectangle&);
	void setr(int, char, int, bool);
	void settprivate(int,char);
	int geti();
	char getc();
	int getw();
	bool getcc();
	int getshapeint();
	char getshapechar();
	void read();
	void display();
	void render();
	void operator =(const  rectangle &);
	bool operator ==(const rectangle &);
	bool operator !=(const rectangle &);
	rectangle &operator ++();
	rectangle &operator --();
	rectangle operator++(int);
	rectangle operator--(int);
	rectangle operator+(rectangle&);
	friend ostream &operator<<(ostream & output, rectangle&);
	friend istream & operator >>(istream & input, rectangle &);


	~rectangle();
};

