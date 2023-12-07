#include <iostream>

using namespace std;

void square(int whole) {
    cout << endl;
    for (int i = whole; i > 0; i--) {
        cout << " * ";
    }
    for (int middle = (whole - 2); middle > 0; middle--) {
        cout << "\n * ";
        for (int theBlanks = (whole-2); theBlanks > 0; theBlanks--) {
            cout << "   ";
        }
        cout << " * ";
    }
    cout << endl;
    for (int i = whole; i > 0; i--) {
        cout << " * ";
    }
}

void T(int t) {
    cout << endl;
     
    for (int i = t; i > 0; i--) {
        cout << " * ";
    }
    if (t % 2 == 0) {
        cout << " * ";
    }
    for (int line = t - 1; line >= 0; line--) {
        cout << endl;
        for (int space = t / 2; space > 0; space--) {
            cout << "   ";
        }
        cout << " * ";
    }
}

void H(int h) {
    for (int lines = h / 2; lines > 0; lines--) {
        cout << "\n * ";
        for (int spaces = h - 2; spaces > 0; spaces--) {
            cout << "   ";
        }
        cout << " * ";
    }
    cout << endl;
    for (int looong = h; looong > 0; looong--) {
        cout << " * ";
    }
    for (int lines = h / 2; lines > 0; lines--) {
        cout << "\n * ";
        for (int spaces = h - 2; spaces > 0; spaces--) {
            cout << "   ";
        }
        cout << " * ";
    }
}


int main()
{
    bool cont = 1;
    int chosing, initialVal;
    cout << "\n=====\tDrawing shapes\t=====\n";

    while (cont == 1) {
        cout << "\n\t=== OPTIONS ===";
        cout << "\n 1 - hollow square";
        cout << "\n 2 - T";
        cout << "\n 3 - H";
        cout << "\n 0 - Exit";

        cout << "\n\tEnter an option:\t";
        cin >> chosing;

        switch (chosing)
        {
        case 1:
            cout << "\n Enter a number: ";
            cin >> initialVal;
            square(initialVal);
            break;

        case 2:
            cout << "\n enter a number: ";
            cin >> initialVal;
            T(initialVal);
            break;

        case 3:
            cout << "\n enter a number: ";
            cin >> initialVal;
            H(initialVal);
            break;

        case 0:
            cont = 0;
            break;

        default:
            cout << "\n Enter a valid option";
            break;
        }
   }
}