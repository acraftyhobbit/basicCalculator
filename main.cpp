#include <iostream>

using namespace std;

int main() {
    double userValue1;
    double userValue2;

    cout << "Enter a number:" << endl;
    cin >> userValue1;

    cout << "Enter another number:" << endl;
     cin >> userValue2;

    cout << "What do you want to do with these numbers?" << endl;
    cout << " + = add" << endl;
    cout << " - = subtract" << endl;
    cout << " * = multiple" << endl;
    cout << " / = divide" << endl;

    char userMathOperator;
    cin >> userMathOperator;

    switch (userMathOperator){
        case '+':
            cout << userValue1 << "+" << userValue2 << " = " << (userValue1 + userValue2) << endl;
            break;
        case '-':
            cout << userValue1 << "-" << userValue2 << " = " << (userValue1 - userValue2) << endl;
            break;
        case '*':
            cout << userValue1 << "*" << userValue2 << " = " << (userValue1 * userValue2) << endl;
            break;
        case '/':
            if(userValue2) // same as userValue2 != 0
                cout << userValue1 << "/" << userValue2 << " = " << (userValue1 / userValue2) << endl;
            else
                cout << "You can't divide by 0" << endl;
            break;
        default:
            cout << "That character is not an option." << endl;
    }


}