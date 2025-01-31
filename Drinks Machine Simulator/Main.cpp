#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
Instructions:

Present the user with a menu of 5 beverages (e.g., Coke, Water).
Ask the user to input a number (1–5) to select a beverage.
Use a switch statement to output the selected beverage:
Example: “You chose: Coke.”
Add error handling for invalid input (e.g., numbers outside the range 1–5).
*/

void printMenu(std::string options[]) {
	for (int i = 0; i < 5; i++) {
		cout << (i + 1) << " - " << options[i] << endl;
	}
}

int main() {
	std::string options[] = { "Water", "Coke", "Lemonade", "Dr.Pepper", "Sprite" };
	printMenu(options);

	int beverageChoice = 0;

	cout << endl << "Please pick an beverage choice: ";
	cin >> beverageChoice;

	// Using switch statement instead of array position to follow instructions
	switch (beverageChoice) {
	case 1:
		cout << "You chose Water." << endl;
		break;
	case 2:
		cout << "You chose Coke." << endl;
		break;
	case 3:
		cout << "You chose Lemonade." << endl;
		break;
	case 4:
		cout << "You chose Dr.Pepper." << endl;
		break;
	case 5:
		cout << "You chose Sprite." << endl;
		break;
	default:
		cout << "You must select an option between 1-5." << endl;
		break;
	}
}