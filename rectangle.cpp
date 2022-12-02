#include "rectangle.h"
#include<iostream>
using namespace std;
rectangle::rectangle()
{
	length = 0;
	asscii = '\0';
	width = 0;
	check = true;
}
rectangle::rectangle(int l, char c, int w, bool ch)
{
	length = l;
	asscii = c;
	width = w;
	check = ch;
}
rectangle::rectangle(const rectangle&r)
{
	length = r.length;
	asscii = r.asscii;
	width = r.width;
	check = r.check;
}
void rectangle::setr(int l, char c, int w, bool ch)
{
	length = l;
	asscii = c;
	width = w;
	check = ch;
}
int rectangle::geti()
{
	return length;
}
char rectangle::getc()
{
	return asscii;
}
int rectangle::getw()
{
	return width;
}
bool rectangle::getcc()
{
	return check;
}
void rectangle::settprivate(int l, char c)
{
	shape::setter(l, c);
}
int rectangle::getshapeint()
{
	int dummy;
	dummy = shape::getter1();
	return dummy;
}
char rectangle::getshapechar()
{
	int temp;
	temp= shape::getter2();
	return temp;

}
void rectangle::read()
{
	shape::setter(length, asscii);
	shape::getter1();
	shape::getter2();
	int he;
	cout << "height of rectangle :";
	cin >> he;
	cout << "status of rectangle\n";
	cout << "hallow:true\nshaded:false\n";
	bool ch;
	cin >> ch;
}

ostream & operator <<(ostream& output, rectangle &r)
{
	if (r.getcc() == true)
	{
		cout << "rectangle hallow\n";
	}
	else if (r.getcc() == false)
	{
		cout << "rectangle shaded\n";
	}
	return output;
}
void rectangle::display()
{

}

istream & operator>>(istream& input, rectangle &r)
{
	int templength;
	char tempchar;
	int tempwidth;
	cout << "enter the length of rectangle\n";
	input >> templength;
	cout << "enter the char for for rectangle \n";
	input >> tempchar;
	cout << "enter the width rectangle\n";
	 
	 input >> tempwidth;
	bool fl1;
	cout << "line is hallow or shaded :: enter 0 or 1 \n";
	input >> fl1;
	r.setr(tempchar, tempchar, tempwidth, fl1);
	return input;
}

void rectangle::render()
{
	if (check == false)
	{
		for (int i = 1; i <= length; i++)
		{
			for (int j = 1; j <= width; j++)
			{
				if (i == 1 || i == length || j == 1 || j == width)
				{
					cout << asscii;
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}


	if (check == true)
	{
		for (int i = 0; i<length; i++)
		{
			for (int j = 0; j<width; j++)
			{
				cout << asscii;
			}
			cout << endl;
		}
	}
}
void rectangle::operator=(const rectangle&r)
{
	length = r.length;
	asscii = r.asscii;
	width = r.width;
	check = r.check;
}
bool rectangle::operator==(const rectangle &r)
{
	bool status = true;
	if (length == r.length && asscii==r.asscii &&width==r.width &&check == r.check)
	{
		return status;
	}
	else
	{
		return false;
	}
}
bool rectangle::operator!=(const rectangle &r)
{
	bool status = true;
	if (length != r.length && asscii != r.asscii &&width != r.width &&check != r.check)
	{
		return status;
	}
	else
	{
		return false;
	}
}
rectangle &rectangle::operator++()
{
	length++;
	width++;
	return *this;
}
rectangle &rectangle::operator--()
{
	length--;
	width--;
	return *this;
}
rectangle rectangle::operator++(int)
{
	shape::setter(length, asscii);
	rectangle dummy(length, asscii,width, check);
	++*(this);
	return *this;
}
rectangle rectangle::operator--(int)
{
	shape::setter(length, asscii);
	rectangle dummy(length, asscii, width, check);
	--*(this);
	return *this;
}
rectangle rectangle::operator+(rectangle &r)
{
	rectangle temp;
	r.length = length + temp.length;
	r.width = width + temp.width;
	return temp;
}

	rectangle::~rectangle()
{
}
