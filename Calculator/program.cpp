#include <iostream>
using namespace std;

// User Defined Functions
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int mod(int a, int b) { return a % b; }
double divi(int a, int b) { return (double)a / b; }

int main() {
    char choice;
    int x, y;

    while (1)   // endless loop
    {
        cout << "\n----- MENU -----\n";
        cout << "+  Addition\n";
        cout << "-  Subtraction\n";
        cout << "*  Multiplication\n";
        cout << "/  Division\n";
        cout << "%  Modulus\n";
        cout << "E  Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 'E' || choice == 'e')
            break;

        cout << "Enter two numbers: ";
        cin >> x >> y;

        switch (choice)
        {
            case '+': cout << "Result = " << add(x, y); break;
            case '-': cout << "Result = " << sub(x, y); break;
            case '*': cout << "Result = " << mul(x, y); break;
            case '/':
                if (y != 0)
                    cout << "Result = " << divi(x, y);
                else
                    cout << "Division by zero not allowed";
                break;
            case '%':
            
                if (y != 0)
                    cout << "Result = " << mod(x, y);
                else
                    cout << "Division by zero not allowed";
                break;
            default:
                cout << "Invalid choice";
        }
    }

    cout << "\nProgram Ended";
    return 0;
}
