#include <iostream>
#include <windows.h>
#include <ctime>
#include <stdio.h>
#include <conio.h>

//Declaration namespace std
using namespace std;

//Function clear console screen
void clearScreen()
{
    system("CLS");
}

//Function time on current system check at the bottom!
int timeSystem();

//Variable
string userName, userDob;

//The main program
int main()
{
    clearScreen();
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

//Function time on current system check the top!!!
int timeSystem()
{
    while( true )
    {
        //time on current system
        time_t now = time(0);

        // convert now to string
        char* dt = ctime(&now);

        cout << "The local date and time is: " << dt << endl;
        cout << "Press enter to return to menu!!!" << endl;

        Sleep( 1000 );

        // return from time
        char key = ' ';

		if( _kbhit() )
			key = _getch();

		if( key == 13 ) //The ENTER key.
			return main(); //Quit the while loop

		else if( key != ' ' )
		{
			cout << "You pressed: " << key << '\n';
			key = ' ';
            Sleep( 1000 );
		}

        clearScreen();
    }
}
