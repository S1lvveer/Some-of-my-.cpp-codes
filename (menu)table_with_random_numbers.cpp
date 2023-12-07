#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int table[3][3], row, col, choice; //row, col
int sum = 0;
bool cont = true, correct = false;

void assignNumbers() {
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			table[r][c] = rand() % 100;
		}
	}
}
//it assigns numbers on full random

void printTable() {
	cout << "\n";
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			cout << "\t" << left << setw(3) << table[r][c];
		}
		cout << endl;
	}
}
//it prints the whole table as a clear table (no borders)

int numbersSum() {
	sum = 0;
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			sum += table[r][c];
		}
	}
	return sum;
}
//it returns a sum of all the numbers in table

void findElement() {
	cout << "\n== Row of the element: ";
	cin >> row;
	while (correct == false) {
		if (row > 0 && row < 4) {
			correct = true;
		}
		else {
			cout << "\n== Row number is incorrect\n Enter a valid number: ";
			cin >> row;
		}
	}
	correct = false;

	cout << "\n== Column of the element: ";
	cin >> col;
	while (correct == false) {
		if (col > 0 && col < 4) {
			cout << "\n== Element of row " << row
				<< ", and column " << col << " is: " << table[row - 1][col - 1];
			correct = true;
		}
		else {
			cout << "\n== Column number is incorrect\n Enter a valid number: ";
			cin >> col;
		}
	
	}
}
//it finds an element

void changeElement() {
	correct = false;
	cout << "\n== Row of the element: ";
	cin >> row;
	while (correct == false) {
		if (row > 0 && row < 4) {
			correct = true;
		}
		else {
			cout << "\n== Row number is incorrect\n Enter a valid number: ";
			cin >> row;
		}
	}
	correct = false;

	cout << "\n== Column of the element: ";
	cin >> col;
	while (correct == false) {
		if (col > 0 && col < 4) {
			correct = true;
		}
		else {
			cout << "\n== Column number is incorrect\n Enter a valid number: ";
			cin >> col;
		}

	}
	correct = 0;

	int liczba;

	cout << "\n Enter a number (1-99): ";
	cin >> liczba;

	while (correct == false) {
		if (liczba > 0 && liczba < 100) {
			table[row - 1][col - 1] = liczba;
			correct = 1;
		}
		else {
			cout << "\n== The number is invalid\n Enter a valid number (1-99): ";
			cin >> liczba;
		}
	}

	cout << "\n===== Current number of row " << row
		<< ", column " << col << " is: " << table[row - 1][col - 1];
}
void menuChoice() {
	cout << "\n===== Choose one option:\n";
	cout << " 1 - Print current table\n";
	cout << " 2 - Show the sum of all current numbers\n";
	cout << " 3 - Find element\n";
	cout << " 4 - Change element\n";
	cout << " 5 - Randomly reassign all elements\n";
	cout << " 0 - Exit\n";

	cin >> choice;
}

int main()
{
	srand(time(NULL));
	assignNumbers();
	cout << "      ===== Table 3x3 =====\n";

	while (cont == true) {
		menuChoice();

		switch (choice) {
			case 1:
				printTable();
			break;

			case 2:
				numbersSum();
				cout << "\n The sum of all numbers is: " << numbersSum() << endl;
				break;

			case 3:
				findElement();
			break;

			case 4:
				changeElement();
			break;

			case 5:
				assignNumbers();
				cout << "\n== Successfully reassigned all numbers\n";
			break;

			case 0:
				cont = false;
			break;
		}
	}

}