#include "triangle.h"
#include<iostream>
using namespace std;
triangle::triangle()
{
	length = 0;
	assciii = '\0';
	height = 0;
	flagg = true;
	////cout << "call from triangle constructor\n";
}
triangle::triangle(int le,char c,int h,bool flag)
{
	length = le;
	assciii = c;
	height = h;
	flagg = flag;
	//cout << "call from triangle copy constructor\n";
}
triangle::triangle(const triangle& t)
{
	length = t.length;
	assciii = t.assciii;
	height = t.height;
	flagg = t.flagg;

}
void triangle::settl(int le )
{
	length = le;
}
void triangle::settc(char c)
{
	assciii = c;
}
void triangle::setth(int h)
{
	height = h;
}
void triangle::settb(bool flg)
{
	flagg = flg;
}
int triangle::gettl()
{
	return length;
}
char triangle::gettc()
{
	return assciii;
}
int triangle::getth()
{
	return height;
}
bool triangle::gettb()
{
	return flagg;
}
void triangle::setprivatel(int len,char ass)
{
	shape::setter(len, ass);
}

int triangle::getshape1()
{
	int dummy;
	dummy = shape::getter1();
	return dummy;
}
char triangle::getshape2()
{
	char temp;
	temp = shape::getter2();
	return temp;
}
void triangle::read()
{
	shape::setter(length, assciii);
	shape::getter1();
	shape::getter2();
	cout << "triangle\n";
	cout << "for upward type:true\n";
	cout << "for downward type:false\n";
	bool flg;
	cin >> flg;
}

ostream & operator <<(ostream& output, triangle &t)
{

	if (t.gettb() == true)
	{
		cout << "\ntriangle is upward\n";
	}
	else if (t.gettb() == false)
	{
		cout << "\ntriangle is downward\n";
	}
	return output;
}
void triangle::display()
{

}
istream & operator>>(istream& input, triangle &t)
{
	char tempchar;
	int templength;
	cout << "enter the length triangle \n";
	input >> templength;
	cout << "enter the char for triangle \n";
	input >> tempchar;
	int tempheight;
	cout << "enter the height of triangle\n";
	input >> tempheight;
	bool fl1;
	cout << "triangle is upward or downward :: enter 0 or 1\n";
	input >> fl1;
	cout << endl;
	t.settl(templength);
	t.settc(tempchar);
	t.setth(tempheight);
	t.settb(fl1);
	return input;
}

void triangle::render()
{
	if (flagg == false)
	{

		for (int i = length; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				cout << assciii;
			}
			cout << endl;
		}
	}
	else 
	{
		for (int i = 1, k = 0; i <= height; ++i, k = 0)
		{
			for (int space = 1; space <= height - i; ++space)
			{
				cout << "  ";
			}

			while (k != 2 * i - 1)
			{
				cout << assciii <<" ";
				++k;
			}
			cout << endl;
		}
	}
}
void triangle::operator=(const triangle &t)
{
	length = t.length;
	assciii = t.assciii;
	height = t.height;
	flagg = t.flagg;
}
bool triangle::operator==(const triangle&t)
{
	bool status = true;
	if ( assciii=t.assciii&& height==t.height && flagg == t.flagg)
	{
		return status;
	}
	else
	{
		return false;
	}
}

bool triangle::operator!=(const triangle&t)
{
	bool status = true;
	if (assciii!=t.assciii && height != t.height && flagg != t.flagg)
	{
		return status;
	}
	else
	{
		return false;
	}
}
triangle &triangle::operator++()
{
	length++;
	height++;
	return *this;
}
triangle &triangle::operator--()
{
	length--;
	height--;
	return *this;
}
triangle triangle::operator++(int)
{
	shape::setter(length,assciii);
	triangle t(length, assciii,height,flagg);
	++*(this);
	return *this;
}
triangle triangle::operator--(int)
{
	shape::setter(length, assciii);
	triangle t(length, assciii,height,flagg);
	--*(this);
	return *this;
}
triangle triangle::operator+(triangle &t)
{
	triangle temp;
	t.length = length + temp.length;
	t.assciii = assciii + temp.assciii;
	t.height = height + temp.height;
	return temp;
}


triangle::~triangle()
{
}
