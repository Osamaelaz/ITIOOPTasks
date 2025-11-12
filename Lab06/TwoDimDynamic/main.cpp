#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int column, int line)
{
    COORD coord = {(SHORT)column, (SHORT)line};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new int[cols];

    cout << "\nEnter elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }

    system("cls");
    cout << "-======= Matrix Display =======-\n\n";

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            gotoxy(5 + j * 6, 4 + i * 2);
            cout << arr[i][j];
        }

    gotoxy(0, 4 + rows * 2 + 2);
    cout << "\n-======= Matrix printed successfully! =======-\n";

    for (int i = 0; i < rows; i++)
        delete[] arr[i];
    delete[] arr;
    return 0;
}

