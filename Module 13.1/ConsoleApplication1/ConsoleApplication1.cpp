
#include <iostream>
#include <string>
using namespace std;
int OddFind(const int length, bool odd);
const int N = 13;

int main()
{   
	cout << "first task\n";
	for (int i = 0; i <= N; i++)
	{
		if (i % 2 == 0 && i!=0)
			cout << i << "\n";
	}
	cout << "Second task\n";
     OddFind(N, true);
	 

	
}
int OddFind( const int lenght, bool odd)
{
	for (int i = 2-odd; i <= lenght; i += 2 )
	{
		cout << i << "\n";
	}
	return 0;
}

