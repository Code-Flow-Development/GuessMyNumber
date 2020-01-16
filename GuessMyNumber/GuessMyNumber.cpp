// GuessMyNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	// seed random number
	srand(static_cast<unsigned int>(time(0)));

	// set max number
	const int MAX_NUMBER = 100;

	//secret number
	int secretnumber = (rand() % MAX_NUMBER) + 1;

	int tries = 0;

	int guess;

	cout << "Guess a number between 1 and " << MAX_NUMBER << endl;

	do {
		cin >> guess;
		++tries;

		if (guess > secretnumber) {
			cout << "Too high!" << endl;
		}
		else if (guess < secretnumber) {
			cout << "Too Low!" << endl;
		}
		else {
			cout << "YOU GOT IT! It took you " << tries  << " tries!" << endl;
		}
	} while (guess != secretnumber);

	system("pause");

	return 0;
}