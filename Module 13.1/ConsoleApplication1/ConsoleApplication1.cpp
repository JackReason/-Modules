
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class player
{
private:
	string name = "noname";
	int points = 0;
public:
	void getName()
	{
		cin >> name;
	}
	string showName()
	{
		return name;
	}
	void getPoints()
	{
		cin >> points;
	}
	int showPoints()
	{
		return points;
	}
};

void masShuffle(player* pointer, int num); 
void showBoard(player* pointer, int num);  


int main()
{
	int numPlrs;
	cout << "How many players?\n";
	cin >> numPlrs;
	player* p = new player[numPlrs];
	cout << "\nSo we got : " << numPlrs << " players\n";
	cout << "Let's name our players and give'em some scores\n";

	for (int i = 0; i < numPlrs; i++)
	{
		cout << "\nplayer number " << (i + 1) << " name is ";
		(p + i)->getName();
		cout << (p + i)->showName() << "'s scores are : ";
		(p + i)->getPoints();


	}
	
	cout << "\nso now we have this board\n";
	showBoard(p, numPlrs);
	cout << "\nLet us shuffle numbers a bit\n";
	masShuffle(p, numPlrs);
	showBoard(p, numPlrs);
	delete[] p;
	cout << "\nThe end";


	

}


void masShuffle(player* pointer, int num)
{
	double factor = 1.25;
	int step = num-1;
	while (step >= 1)
	{
		for (int i = 0; i + step < num; i++)
		{
			if ((pointer + i)->showPoints() < (pointer + i + step)->showPoints())
			{
				std::swap(*(pointer + i), *(pointer + i + step));
			}
		}
		step /= factor;
	}
}

void showBoard(player* pointer, int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << (pointer + i)->showName();
		cout << " scores " << (pointer + i)->showPoints();
		cout << "\n";

	}

}