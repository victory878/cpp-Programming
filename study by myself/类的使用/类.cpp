#include <iostream>
using namespace std;
class Box
{
public:
	double length;
	double width;
	double height;
	double Volume(void);
	void Set(double len, double wid, double hei);
};

double Box::Volume(void)
{
	return length * width * height;
}

void Box::Set(double len, double wid, double hei)
{
	length = len;
	width = wid;
	height = hei;
}
int main()
{
	Box Box1;
	//Box Box2;

	Box1.Set(2.0, 3.0, 2.0);
	cout << Box1.Volume();
	return 0;
}
