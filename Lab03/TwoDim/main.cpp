#include <iostream>
#include <iomanip>
#include <windows.h>
#define row 3
#define col 4
using namespace std;

void gotoxy(int column, int line)
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int arr[row][col];
    int sumOfRowData[row] = {0};
    double avgOfColData[col] = {0};

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
            sumOfRowData[i] += arr[i][j];
            avgOfColData[j] += arr[i][j];
        }
    }
    system("cls");
    cout << "Matrix (" << row << "," << col << ")\n\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            gotoxy(0 + j * 10, 3 + i * 2);
            cout << arr[i][j];
        }

        gotoxy(0 + col * 10 + 5, 3 + i * 2);
        cout << "sum = " << sumOfRowData[i];
    }
    gotoxy(0, 3 + row * 2 + 1);
    cout << "====================================================";
    gotoxy(0, 3 + row * 2 + 3);
    cout << "Average Of Column Data:\n";
    cout << fixed << setprecision(2);

    for (int i = 0; i < col; i++) {
        gotoxy(0, 3 + row * 2 + 5 + i);
        cout << "Col " << i << " : " << avgOfColData[i] / row;
    }
    gotoxy(0, 3 + row * 2 + col + 8);
    cout << endl;

    return 0;
}
