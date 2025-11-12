#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void textattr(int colorHex) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorHex);
}

void gotoxy(int x, int y) {
    COORD coord = {(SHORT)x, (SHORT)y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int size = 100;
    char line[size] = {0};
    int len = 0;
    int pos = 0;

    textattr(11);
    cout << "======== Line Editor ========" << endl;
    textattr(15);

    gotoxy(0, 2);

    while (true) {
        char ch = getch();

        if (ch == 27)  // Esc
            break;

        if (ch == -32) {  // Extended Key
            ch = getch();

            switch (ch) {
                case 75: // Left
                    if (pos > 0)
                        pos--;
                    break;

                case 77: // Right
                    if (pos < len)
                        pos++;
                    break;

                case 72: // Up
                    if (pos < len && line[pos] >= 'a' && line[pos] <= 'z')
                        line[pos] = line[pos] - 32;
                    break;

                case 80: // Down
                    if (pos < len && line[pos] >= 'A' && line[pos] <= 'Z')
                        line[pos] = line[pos] + 32;
                    break;
            }
        }
        else if (ch == 8) {
            if (pos > 0) {
                for (int i = pos - 1; i < len - 1; i++)
                    line[i] = line[i + 1];
                pos--;
                len--;
                line[len] = '\0';
            }
        }
        else if (ch >= 32 && ch <= 126) {
            if (len < size - 1) {
                for (int i = len; i > pos; i--)
                    line[i] = line[i - 1];
                line[pos] = ch;
                len++;
                pos++;
                line[len] = '\0';
            }
        }

        gotoxy(2, 2);
        textattr(10);
        cout << line << " ";
        textattr(7);

        gotoxy(2 + pos, 2);
    }

    system("cls");
    cout << "\nLast Edited Line: " << line << endl;

    return 0;
}
