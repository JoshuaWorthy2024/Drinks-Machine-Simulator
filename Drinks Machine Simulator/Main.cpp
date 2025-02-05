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

void PrintMenu(std::string options[]) {
	for (int i = 0; i < 5; i++) {
		cout << (i + 1) << " - " << options[i] << endl;
	}
}

int main() {
	std::string Options[] = { "Water", "Coke", "Lemonade", "Dr.Pepper", "Sprite" };
	PrintMenu(Options);

	int BeverageChoice = 0;

	cout << endl << "Please pick a beverage choice: ";
	cin >> BeverageChoice;

	cout << endl << endl  << "---Method 1---" << endl;

	switch (BeverageChoice) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout << "You chose " << Options[BeverageChoice - 1] << "." << endl << endl;
		break;
	default:
		cout << "You must select an option between 1-5." << endl << endl;
		break;
	}

	cout << "---Method 2---" << endl;

	// Using switch statement instead of array position to follow instructions
	switch (BeverageChoice) {
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

	return 0;
}