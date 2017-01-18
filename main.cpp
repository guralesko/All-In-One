#include <iostream>
#include <windows.h>
#include <ctime>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>


//Declaration namespace std
using namespace std;

//Variable main menu
int choice;

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
    Sleep( 2000 );

    //Function Main Menu
    mainMenu();


    return 0;
}

//Function time on current system check the top!!!
int timeSystem()
{
    while( true )
    {
        clearScreen();
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
			mainMenu(); //Quit the while loop and return to main program

		else if( key != ' ' )
		{
			cout << "You pressed: " << key << '\n';
			key = ' ';
            Sleep( 1000 );
		}

        clearScreen();
    }
}

//Function Main Menu
void mainMenu()
{
    clearScreen();
    cout << endl;
    cout << "MAIN MENU" << endl;
    cout << "---------------" << endl;
    cout << "1.Show time on current system " << endl;
    cout << "2." << endl;
    cout << "3." << endl;
    cout << "4." << endl;
    cout << "5.Exit" << endl;
    cout << "---------------" << endl;
    cout << "Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
           timeSystem();
        break;

        case 2:
            mainMenu();
        break;

        case 3:
            mainMenu();
        break;

        case 4:
            mainMenu();
        break;

        case 5:
            exit(0);
        break;

        default:
            cout << "There is no choice";
    }
}


