
#include <iostream>
#include <math.h>
using namespace std;

class Vector
{
private:
	float x;
	float y;
	float z;
public:
	Vector()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	Vector(float _x, float _y, float _z) : x(_x), y(_y), z(_z)
	{

	}
	void getVector()
	{
		cout << x << " " << y << " " << z << "\n";
	}
	float lengthVector()
	{
		float sum = pow(x, 2) + pow(y, 2) + pow(z, 2);
		float length = sqrt(sum);
		return length;
	}
};


int main()
{
	cout << "default init :\n";
	Vector mine;
	mine.getVector();
	cout << "by parameters init :\n";
	Vector yours(-5, 10, 12.16);
	yours.getVector();
	cout << "\n Your vector length would be like : " << yours.lengthVector() << endl;
	

}


