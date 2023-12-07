#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

void f(unsigned int N) {
	int power = 2;
	vector<int> numbers;

	for (int i = 1; i <= N; i++) {
		numbers.push_back(i);
	}

	for (int print = 0; print < numbers.size(); print++) {
		if (numbers[print] == 1) {
			cout << "\n POWER";
		}
		else if (numbers[print] == power) {
			cout << "\n POWER";
			power *= 2;
		}
		else {
			cout << "\n " << numbers[print];
		}
	}
}

int main() {
	int input;
	bool correct = 0;
	cout << "\n ====== All powers of 2 up to certain number ======";
	cout << "\n	Enter an unsigned number (1 - 1000):\t";
	cin >> input;

	while (correct != 1) {
		if (input < 1 || input > 1000) {
			cout << "\n Number is invalid\n Enter a VALID number (1 - 1000): ";
			cin >> input;
		}
		else {
			correct = 1;
		}
	}

	clock_t begin = clock();

	f(input);
	
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;



	printf("\n Time spent: %f", time_spent);
}
