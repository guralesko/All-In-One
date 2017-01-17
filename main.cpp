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

//Function Main Menu list check at the bottom!
void mainMenu();

//Variable about user
string userName, userDob;

//Variable main menu
int choice;

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

    //Function Main Menu
    mainMenu();

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
			return main(); //Quit the while loop and return to main program

		else if( key != ' ' )
		{
			cout << "You pressed: " << key << '\n';
			key = ' ';
            Sleep( 1000 );
		}

        clearScreen();
    }
}

void mainMenu()
{
    cout << endl;
    cout << "MAIN MENU" << endl;
    cout << "---------------" << endl;
    cout << "1." << endl;
    cout << "2." << endl;
    cout << "3." << endl;
    cout << "4." << endl;
    cout << "5." << endl;
    cout << "---------------" << endl;
    cout << "Wybierz: ";
    cin >> choice;
}

void switchMainMenu()
{
    ;
}
