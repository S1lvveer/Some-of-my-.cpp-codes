#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

int minimal, maximal, howMuch;
vector<int> table;

void showTable() {
	for (int i = 0; i < howMuch; i++) {
		cout << table[i] << " ";
	}
}
int main() {
	
	srand(time(NULL));

	cout << "\n How many nums do you want to print?\t";
	cin >> howMuch;
	cout << "\n minimal value:\t";
	cin >> minimal;
	cout << "\n maximal:\t";
	cin >> maximal;

	if (minimal > maximal) {
		swap(minimal, maximal);
	}

	cout << "\n Initially generated array:\n\n";
	for (int i = 0; i < howMuch; i++) {
		table.push_back(rand() % (maximal - minimal) + minimal);
		cout << table[i] << " ";
	}

	cout << "\n Numbers from lowest to highest:\n";
	for (int i = 0; i < howMuch; i++) {
		for (int j = 1; j < howMuch - i; j++) {
			if (table[j - 1] > table[j]) {
				int temp = table[j];
				table[j] = table[j - 1];
				table[j - 1] = temp;
			}
		}
	}
	
	showTable();
}