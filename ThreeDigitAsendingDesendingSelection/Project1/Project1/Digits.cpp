/*

Pranathi, Cameron, Elena - 10/5/17

Assignment Name : Three Digit Ascend Descend Selection

storing three variables, print out ascending or descending based on if > or < than previous digit

*/

// Libraries

#include <iostream> <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {
	int calc_1, var1, var2, var3;
	cout << "Enter a three digit number" << endl;
	cin >> calc_1;
	var1 = calc_1 % 10; // Digit in the ones place
	var2 = (calc_1 / 10) % 10; // Digit in the tens place
	var3 = (calc_1 / 100) % 100; // Digit in the hundreds place
	if ((var1 > var2) && (var2 > var3)) {
		cout << "ascending" << endl; // prints ascending if the digits go up in value from the hundreds place to the ones place
	}

	else if ((var3 > var2) && (var2 > var1)) { // prints descending if the digits go up in value from the hundreds place to the ones place
		cout << "descending" << endl;
	}
	else {
		cout << "neither" << endl; // prints neither if the 3 digit integer doesnt apply to ascending or descending
	}

	pause(); // pauses to see the displayed text
}
