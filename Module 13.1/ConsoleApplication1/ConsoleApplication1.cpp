
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int i;
	int j;
	const int N = 7;
	int array[N][N];
	cout << "Massive:\n";
	for ( i = 0; i < N; i++)
	{
		for ( j = 0; j < N; j++)
		{
			array[i][j] = i + j;
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}

	time_t now;
	struct tm nowLocal;
	now = time(NULL);
	localtime_s(&nowLocal, &now);
	cout << "Today is : " << nowLocal.tm_mday;
	int day = nowLocal.tm_mday;
	int sum = 0;

	for (j = 0;j < N; j++ )
	{
		sum += array[day % N][j];
	}
	cout << "\nsum=" << sum;

}


