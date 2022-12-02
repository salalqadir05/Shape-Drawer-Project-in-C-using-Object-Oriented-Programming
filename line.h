#pragma once
#include "shape.h"
#include<iostream>
using namespace std;
class line :
	public shape
{
private:
	int length;
	char ascitype;
	bool check;
public:
	line();
	line(int leng1, char assc, bool flag);
	line(const line&l);
	void setl(int leng1, char assc, bool flag);
	int getl();
	char getc();
	bool getf();
	void setprivate(int l,char c);
	int getprivate();
	char getpriavtec();
	void read();
	void display();
	void render();
	void operator =(const  line &l);
	bool operator ==(const line&l);
	bool operator !=(const line&l);
	line &operator ++();
	line &operator --();
	line operator++(int);  
	line operator--(int);
	line operator+( line&);
	friend ostream &operator<<(ostream & output, line&);
	friend istream & operator >>(istream & input, line &);


	~line();
};

