#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    char choice;
    
    do {
        cout << "\n🎉 Welcome to the Fun Calculator! 🎉\n";
        cout << "Enter first number: ";
        cin >> num1;
        
        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;
        
        cout << "Enter second number: ";
        cin >> num2;
        
        cout << "\nCalculating... 🤔\n";
        
        switch (operation) {
            case '+':
                cout << "🎯 Result: " << num1 + num2 << " 🎯\n";
                break;
            case '-':
                cout << "🎯 Result: " << num1 - num2 << " 🎯\n";
                break;
            case '*':
                cout << "🎯 Result: " << num1 * num2 << " 🎯\n";
                break;
            case '/':
                if (num2 != 0)
                    cout << "🎯 Result: " << num1 / num2 << " 🎯\n";
                else
                    cout << "🚨 Error! Division by zero is not allowed! 🚨\n";
                break;
            default:
                cout << "😵 Oops! Invalid operator! Try again. 😵\n";
        }
        
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');
    
    cout << "\nThanks for using the Fun Calculator! 🎉 See you next time! 👋\n";
    return 0;
}
