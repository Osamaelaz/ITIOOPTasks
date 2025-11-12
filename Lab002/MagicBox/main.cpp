#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
void gotoxy( int column, int line )
{
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}

int main()
{
        int size, row, col;
            do {
                cout << "\nPlease Enter Your Size: ";
                cin >> size;

                if (size % 2 == 0)
                    cout << "\nPlease Enter Size Odd Number";
                else {
                    system("cls");
                    row = 1;
                    col = (size + 1) / 2;

                    cout << "\n======== Magic Box ========\n";
                    for (int i = 1; i <= size * size; i++) {
                        gotoxy(col * 6, row * 3);
                        cout << i;

                        if (i % size == 0)
                            row++;
                        else {
                            row--;
                            col--;
                            if (row < 1) row = size;
                            if (col < 1) col = size;
                        }
                    }

                    cout << "\n==============================\n";
                }

            } while (size % 2 == 0);

}
