
#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
	virtual void Voice()
	{
		string sound = "original";
		cout << sound;
	}
	
};


class Piggy : public Animal
{
public:
	string sound = "Squek";
	void Voice() override
	{
		cout << sound;
	}

};

class Cow : public Animal
{
public:
	string sound = "Muuu";
	void Voice() override
	{
		cout << sound;
	}
};

class Horsy : public Animal
{
public:
	string sound = "Eeehaa";
	void Voice() override
	{
		cout << sound;
	}
};

int main()
{
	Cow a;
	Horsy b;
	Piggy c;
	Animal x;
	Animal* arr[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++)
	{
		arr[i]->Voice();
		cout << ' ';
	}
	
	cout << "\n\n";
	Animal* (*p) = new Animal*[3];
	p[0] = new Cow;
	p[1] = new Horsy;
	p[2] = new Piggy;
	for (int i = 0; i < 3; i++)
	{
	   p[i]->Voice();
	}

	for (int i = 0; i < 3; i++)
	{
		delete[]p[i];
	}

	

	

}


