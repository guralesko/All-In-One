#include <iostream>

using namespace std;

void clearScreen()
{
    system("CLS");
}

string userName, userDob;

int main()
{
    cout << "Hello" << endl;
    cout << "What is your name :";
    cin >> userName;

    clearScreen();

    cout << "What is your date of birth :";
    cin >> userDob;

    clearScreen();

    cout << "Hello " << userName << endl;
    
    return 0;
}
