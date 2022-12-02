#pragma once
class shape
{
private:
	int length;
	char asscii;
public:
	shape();
	shape(int leng, char assci);
	shape(const shape& s);
	void setter(int leng, char assci);
	int getter1();
	char getter2();
	virtual void read() = 0;
	virtual void display() = 0;
	virtual void render() = 0;
	~shape();
};

