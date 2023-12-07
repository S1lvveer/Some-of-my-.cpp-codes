#include <iostream>
using namespace std;

unsigned int height;
int initialHeight, drawing, row = 1, choice;
bool cont = true;
bool correct = false;

string filling = "#";

void Upright() {
	height = initialHeight;
	row = 1;
	for (int h = height; height > 0; height--) {
		cout << "\n\t";
		for (int space = height; space > 0; space--) {
			cout << "   ";
		}

		drawing = (row * 2) - 1;
		for (int d = drawing; d > 0; d--) {
			cout << " " << filling << " ";
		}
		row++;
	}
}

void Reversed() {
	height = 1;
	row = initialHeight;
	while (height <= initialHeight) {
		cout << "\n\t";
		for (int i = height; i > 0; i--) {
			cout << "   ";
		}
		height++;

		drawing = (row * 2) - 1;
		for (int d = drawing; d > 0; d--) {
			cout << " " << filling << " ";
		}
		row--;
	}
}

void initializing() {
	cout << "\n How tall you want your piramid?\t";
	cin >> height;

	while (correct == false) {
		if (height < 1 || height > 12) {
			cout << "\n\tYou cannot use this number!\n  Chose another one   -> ";
			cin >> height;
		}
		else if (height == 1) {
			cout << "\n\t No.\n\n  Chose another one   -> ";
			cin >> height;
		}
		else {
			correct = true;
		}
	}
	initialHeight = height;
}
int main() {
	cout << "\n\t===== P I R A M I D A =====\n";
	
	initializing();
	while (cont == true) {
		cout << "\nDo you want to see it:\n";
		cout << " 1 - Upright\n 2 - Reversed\n 3 - Both\n 4 - Change the height\n 5 - Change the filling\n 0 - Exit the code\n\tYour choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			Upright();
			break;

		case 2:
			Reversed();
			break;

		case 3:
			Upright();
			row = initialHeight + 1;
			drawing = (row * 2) - 1;
			cout << "\n\t";
			for (int d = drawing; d > 0; d--) {
				cout << " " << filling << " ";
			}
			Reversed();
			break;

		case 4:
			initializing();
			break;

		case 5:
			cout << "\n\t Change filling char:\t";
			cin >> filling;
			
			correct = false;
			while (correct == false) {
				if (filling.length() > 1) {
					cout << "\n\t Length cannot be longer than 1 character\n\t Write another characater: ";
					cin >> filling;
				}
				else {
					correct = true;
				}
			}
			break;

		case 0:
			cout << "\n\t Thanks for trying out the code!\n";
			cont = false;
			break;
		
		default:
			cout << "\n\t That's not a valid option >:(";
		}
	}
}