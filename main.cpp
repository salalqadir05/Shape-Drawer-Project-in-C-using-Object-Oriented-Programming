#include<iostream>
#include "line.h"
#include "shape.h"
#include "triangle.h"
#include "rectangle.h"
using namespace std;
int main()
{
	const int NUMBER = 6;
	shape * shapes[NUMBER];
	shapes[0] = new line(10, '*',true);	shapes[1] = new line(10, '+',false);
	shapes[2] = new rectangle(10,'&',5,false);
	shapes[3] = new triangle(9,'%', 6,false);
	shapes[4] = new rectangle(10,'@',5, true);
	shapes[5] = new triangle(9, '$', 6,true);
	cout << "** Line **\n";
	line* pl = (line*) shapes[0];
	line l1 = *pl;
	cout << "Line one:" << l1;
	pl = (line*) shapes[1];
	line l2 = *pl;
	cout << "Line two:" << l2;
	line l = l1 + l2;
	cout << " Line one + Line two = : "<< l;
	l = l1++;
	cout << " L = l1++ = : " << l;
	l = --l1;
	cout << " L = --l1 = : " << l;
	cout << "l1 == l2: " << (l1 == l2)<< endl;
	cout << "l1 != l2: " << (l1 != l2)<< endl;
	cout << "** Triangle **\n";
	triangle* pt =(triangle*)shapes[3];
	triangle t1 = *pt;
	cout << "Triangle one:" << t1;
	pt = (triangle*)shapes[5];
	triangle t2 = *pt;
	cout << "Triangle two:" << t1;
	triangle T = t1 + t2;
	cout << "Triangle one + two:" << T;
	T = t1++;
	cout << "t1++ = " << T;
	T = --t1;
	cout << "--t1 = " << T;
	cout << "t1 == t2: " << (t1 == t2)<< endl;
	cout << "t1 != t2: " << (t1 != t2)<< endl;
	cout << "** Triangle **\n";	rectangle* pr =
	(rectangle*)shapes[2];
	rectangle r1 = *pr;
	cout << "Rectangle one:" << r1;
	pr = (rectangle*)shapes[4];
	rectangle r2 = *pr;
	cout << "Rectangle two:" << r2;
	rectangle R = r1 + r2;
	cout << " Rectangle one + two = "<<R;
	R = r1++;
	cout << "R = r1++: " << R;
	R = --r1;
	cout << "R = --r1: " << R;
	cout << "r1 == r2: " << (r1 == r2)<< endl;
	cout << "r1 != r2: " << (r1 != r2)<< endl;
	// cin on Line, Rectangle and triangle
	cin >> l >> R >> T;
	// cout on Line, Rectangle and triangle
	cout << l << R << T;
	// polymorphism
	cout << "Invoking through polymorphism: \n";
	
	for (int i = 0; i < NUMBER; i++)
	{
	shapes[i]->display();
	shapes[i]->render();
	}
		cout << endl;	system("pause");	return 0;}