#include <iostream>
#include <windows.h>
#include <conio.h>
#define size 15
using namespace std;

void textattr(int colorHex)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorHex);
}

void gotoxy(int column, int line)
{
    COORD coord;
    coord.X = (SHORT)column;
    coord.Y = (SHORT)line;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){

    char menu[3][size]={"New","Display","Exit"};
    int cp=0;
    int flag=0;
    char ch;
    do{
        system("cls");
        for(int i=0;i<3;i++){
            if(i==cp)textattr(0xf4);
            gotoxy(10,5+i);
            cout<<menu[i];
            textattr(0x0f);
        }
        ch=getch();//Extended Key (-32,byte) \ Normal Key (Enter , Esc)
        switch (ch){
            case -32: //Extended Key
                  ch=getch();
                  switch(ch){
               case 72: cp--;if(cp<0)cp=2; //Up
                break;
               case 80: cp++;if(cp>2)cp=0; //Down
                break;
               case 71: cp=0;    //Home
                break;
               case 79: cp=2;    //End
                break;
                }
                break;
            case 13: //Enter
                system("cls");
                cout<<"You Selected "<<menu[cp]<<endl;
                system("pause");
                if (cp==2)flag=1;
                break;
            case 27://Esc
                flag=1;
                break;
            }
     }
    while(flag==0);
    return 0;
}





