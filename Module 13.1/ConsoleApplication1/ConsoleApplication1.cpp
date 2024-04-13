
#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
	virtual void Voice()
	{
		cout << "default sound";
	}
	
};

class Piggy : public Animal
{
public:
	void Voice() override
	{
		cout << "Squek";
	}

};

class Cow : public Animal
{
public:
	void Voice() override
	{
		cout << "Muuu";
	}
};

class Horsy : public Animal
{
public:
	void Voice() override
	{
		cout << "EeeeeHaaa";
	}
};

int main()
{
	Cow a;
	Horsy b;
	Piggy c;
	Animal* arr[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++)
	{
		arr[i]->Voice();
		cout << ' ';
	}
	

	

}


