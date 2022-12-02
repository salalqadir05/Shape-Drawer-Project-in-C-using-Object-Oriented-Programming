#include<iostream>
#include "line.h"
using namespace std;

line::line()
{
	length = 0;
	ascitype = '\0';
	check= true;
	//cout << "call from line constructor\n";
}
line::line(int leng1, char assc, bool flag)
{

	length = leng1;
	ascitype = assc;
	check = flag;
	//cout << "call from line parameterized constructor\n";
}
line::line(const line &l)
{
	length = l.length;
	ascitype = l.ascitype;
	check = l.check;
	//cout << "call from line copy constructor\n";
}
void line::setl(int leng1, char assc, bool flag)
{
	length = leng1;
	ascitype = assc;
	check = flag;
}
int line::getl()
{
	return length;
}
char line::getc()
{
	return ascitype;
}
bool line::getf()
{
	return check;
}
void line::setprivate(int l, char c)
{
	shape::setter(length, ascitype);
}
int line::getprivate()
{
	int temp;
	temp = shape::getter1();
	return temp;
}
char line::getpriavtec()
{
	int dummy;
	dummy = shape::getter2();
	return dummy;
}
void line::read()
{
	shape::setter(length, ascitype);
	shape::getter1();
	shape::getter2();
	cout << "enter the line status vertical or horizental :\n";
	bool ch;
	cin >> ch;
}
void line:: display()
{
}
istream & operator>>(istream& input, line &l)
{
	int templength;
	char tempchar;
	cout << "enter the length of the line\n";
	input >> templength;
	cout << "enter the char for line\n";
	
	input >> tempchar;
	bool fl1;
	cout << "line is horizental or vertical :: enter 0 or 1 \n";
	input >> fl1;
	l.setl(templength, tempchar, fl1);
	return input;
}
ostream & operator <<(ostream& output, line &l)
{
	if (l.getf() == true)
	{
		cout << "\nline is horizental\n";
	}
	if (l.getf() == false)
	{
		cout << "\nline is vertical\n";
	}
	return output;
}
void line::render()
{
	if (check == true)
	{
		for (int i = 0; i <=length; i++)
		{
			cout << ascitype;
		}

		cout << endl;
	}
	if (check == false)
	{
		for (int i = 0; i <= length; i++)
		{
			cout << ascitype << endl;
		}
	}
}
void line::operator=(const line& l)
{
	length = l.length;
	ascitype = l.ascitype;
	check = l.check;
}
bool line::operator==(const line&l)
{
	bool status = true;
	if (length == l.length && ascitype == l.ascitype && check == l.check)
	{
		return status;
	}
	else
	{
		return false;
	}
}
bool line::operator!=(const line& l)
{
	bool status = true;
	if (length != l.length && ascitype != l.ascitype && check != l.check)
	{
		return status;
	}
	else
	{
		return false;
	}
}
line &line::operator++()
{
	length++;
	return *this;
}
line &line::operator--()
{
	length--;
	return *this;
}
line line::operator++(int)
{
	shape::setter(length, ascitype);
	line dummy(length, ascitype, check);
	++*(this);
	return *this;
}
line line::operator--(int)
{
	shape::setter(length, ascitype);
	line dummy(length, ascitype, check);
	--*(this);
	return *this;
}
line line::operator+(line &l)
{
	line temp;
	l.length = length + temp.length;
	return temp;
}


line::~line()
{
	//cout << "call from line destructor\n";
}
