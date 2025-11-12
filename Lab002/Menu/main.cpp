#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
        char ch;
    do {
        system("cls");
        cout << "------ main menu ------\n";
        cout << "[N,n] - new\n";
        cout << "[D,d] - display\n";
        cout << "[E,e] or [Esc] - exit\n";
        cout << "-----------------------\n";
        cout << "Please Enter your choice: ";

        ch = getch();
        system("cls");

        switch (ch) {
            case 'n':
            case 'N':
                cout << "New Choice Selected.\n";
                break;
            case 'd':
            case 'D':
                cout << "Display Choice Selected.\n";
                break;
            case 'e':
            case 'E':
            case 27:
                cout << "Exit Choice Selected.\n";
                break;
            default:
                cout << "invalid choice, try again.\n";
                break;
        }

        if (ch != 'e' && ch != 'E' && ch != 27) { //To Display the choice if N or D or invalid
            cout << "\n press any key to return to the menu...";
            getch();
        }

    } while (ch != 'e' && ch != 'E' && ch != 27);

}
