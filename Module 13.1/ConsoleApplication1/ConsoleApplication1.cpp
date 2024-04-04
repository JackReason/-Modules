
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word1 = "Let's play us";
	string word2 = ("some game");
	string word3(3, '!');
	string phrase = word1 + " " + word2 + word3;
	cout << phrase << "\n";
	cout << "The phrase has " << phrase.size() << " symbols in it\n";
	cout << "The first symbol is : " << phrase[0] << "\n";
	cout << "The last symbol is : " << phrase[phrase.length()-1];
	return 0;

}

