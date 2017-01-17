#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

void clearScreen()
{
    system("CLS");
}

void timeSystem()
{
    //time on current system
    time_t now = time(0);

    // convert now to string
    char* dt = ctime(&now);

    cout << "The local date and time is: " << dt << endl;
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
    
    timeSystem();
    
    return 0;
}
