#include <iostream>
using namespace std;

int dogAge, humanAge;

int main()
{
	cout << "\t ===== DOG'S TO HUMAN AGE CALCULATOS =====\n";
	cout << "Enter your dog's age: ";
	cin >> dogAge;

	switch (dogAge) {
		case 1:
			cout << "\n Your dog's human age is 15";
		break;
		
		case 2:
			cout << "\n Your dog's human age is 25";
		break;

		default:
			dogAge -= 2;

			for (int i = 0; i < dogAge; i++) {
				humanAge += 5;
			}

			humanAge += 25;

			cout << "\t Your dog's human age is " << humanAge;
		break;
	}
}

/*
	Napisz program, który wczytuje wiek psa (podany w latach) od użytkownika 
	i przelicza ten wiek na ekwiwalent wieku ludzkiego, przyjmując, że 
	pierwszy rok życia psa jest równy 15 ludzkim latom, 
	drugi rok życia to 10 ludzkich lat, 
	a każdy kolejny rok to 5 ludzkich lat.
	Program powinien wypisać ekwiwalent wieku ludzkiego dla podanego wieku psa.
*/