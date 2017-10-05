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
	var1 = calc_1 % 10; // far right
	var2 = (calc_1 / 10) % 10; // middle
	var3 = (calc_1 / 100) % 100; // far left

	if ((var1 > var2) && (var2 > var3)) {
		cout << "ascending" << endl;
	}

	else if ((var3 > var2) && (var2 > var1)) {
		cout << "descending" << endl;
	}
	else {
		cout << "neither" << endl;
	}

	pause(); // pauses to see the displayed text
}