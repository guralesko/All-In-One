#include <iostream>

using namespace std;

string userName, userDob;

int main()
{
    cout << "Hello" << endl;
    cout << "What is your name :";
    cin >> userName;

    system("CLS");

    cout << "What is your date of birth :";
    cin >> userDob;

    system("CLS");

    cout << "Hello " << userName << endl;
    
    return 0;
}
