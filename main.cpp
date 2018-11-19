/*	Project:    NAME OF PROJECT GOES HERE
	Name:       YOUR NAME GOES HERE
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <iostream>

using namespace std;

void PrintMenu(int &x)
{
	cout << "1 - Create Chromotid" << endl;
	cout << "2 - Analyze Chromotid" << endl;
	cout << "3 - Output Chromotid to file" << endl;
	cout << "4 - Input Chromotid from file" << endl;
	cout << "5 - Combine Two Chromotids" << endl;
	cout << "6 - Exit" << endl;
}

int main(int argc, char *argv[])

{
	int userChoice = 1;

	while (userChoice > 0 || userChoice < 7)
	{
		PrintMenu(userChoice);
		cin >> userChoice;
	}

	// This causes the program to pause at its completion.
	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
		cin.ignore();
	}
	return 0;
}