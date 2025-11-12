#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string.h>
using namespace std;

struct Emp {
    int Id = -1;
    char Name[20];
    int Age;
};

void textattr(int colorHex) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorHex);
}

void gotoxy(int column, int line) {
    COORD coord;
    coord.X = (SHORT)column;
    coord.Y = (SHORT)line;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void PrintEmp(Emp e);
void swap(int* ptrx,int* ptry);
void InsertEmp(Emp emps[], int size);
void NewMenu(Emp emps[]);
void DisplayMenu(Emp emps[], int size);
void DeleteMenu(Emp emps[]);
void DeleteById(Emp emps[]);
void DeleteByName(Emp emps[]);

int main() {


       //1.0 Create One Struct And Print Data
       cout<<"\n1.0 Create One Struct And Print Data\n"<<endl;
       Emp e01={10,"Osama",22};
       PrintEmp(e01);

      //2.0 Array of Struct And Print It

//    system("cls");
      cout<<"\n\n************************\n";
    cout<<"\n2.0 Create Array of Struct And Print It\n"<<endl;
      Emp arr[5];
      InsertEmp(arr,5);
      cout<<"====== Employee List ========\n";
      for(int i=0;i<5;i++){
            cout<<"Employee0"<<i+1<<" : ";
            PrintEmp(arr[i]);
      }

      //3.0 Swap
//    system("cls");
      int x=10,y=20;
      cout<<"\n\n************************\nBefore Swap\n"<<"x="<<x << ", y="<<y<<"\n";
      swap(&x,&y);
      cout<<"After Swap\n"<<"x="<<x << ", y="<<y<<"\n";

      //4.0 Pointer To Array of int
     cout<<"\n\n************************\n";
     cout<<"Pointer To Array of int \n";
//    system("cls");
    int arr02[5]={10,20,30,40,50};
    int* ptr=arr02;
    for(int i=0;i<5;i++)cout<<*(ptr+i)<<" ";

     //5.0 Pointer To Array of Struct
    cout<<"\n\n************************\n";
    cout<<"Pointer To Array of Struct \n";
//    system("cls");
    Emp arr03[3];
    InsertEmp(arr03,3);
//    system("cls");
    cout<<"\n\n====== Employee List ========\n";
    Emp* ptr02=arr03;
    for(int i=0;i<3;i++)
        cout<<"\nEmployee0"<<i+1<<" : "<<"Id: "<<(ptr02+i)->Id<<", Name: "<<(ptr02+i)->Name <<"Age: "<<(ptr02+i)->Age;
    getch();

    system("cls");
    char menu[4][15] = {"New", "Display", "Delete", "Exit"};
    Emp emps[5];
    int cp = 0;
    int flag = 0;
    char ch;

    do {
        system("cls");
        for (int i = 0; i < 4; i++) {
            if (i == cp)
                textattr(0xf4);
            gotoxy(10, 5 + i);
            cout << menu[i];
            textattr(0x0f);
        }
        ch = getch(); //Extended Key (-32,byte) \ Normal Key (Enter , Esc)
        switch (ch) {
        case -32: //Extended Key
            ch = getch();
            switch (ch) {
            case 72:
                cp--;
                if (cp < 0)
                    cp = 3; //Up
                break;
            case 80:
                cp++;
                if (cp > 3)
                    cp = 0; //Down
                break;
            case 71:
                cp = 0; //Home
                break;
            case 79:
                cp = 3; //End
                break;
            }
            break;

        case 13: //Enter
        {
            system("cls");
            if (strcmp(menu[cp], "New") == 0)
                NewMenu(emps);
            if (strcmp(menu[cp], "Display") == 0)
                DisplayMenu(emps, 5);
            if (strcmp(menu[cp], "Delete") == 0)
                DeleteMenu(emps);
            if (strcmp(menu[cp], "Exit") == 0)
                flag = 1;
            system("pause");
            break;
        }

        case 27: //Esc
            flag = 1;
            break;
        }
    } while (flag == 0);

    return 0;
}



void PrintEmp(Emp e) {
    cout << "Id=" << e.Id << " , Name=" << e.Name << " , Age=" << e.Age << endl;
}

void swap(int* ptrx,int* ptry){
    int temp=*ptrx;
    *ptrx=*ptry;
    *ptry=temp;
}

void InsertEmp(Emp emps[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "*********\nEmp0" << i + 1 << "\nEnter Id: ";
        cin >> emps[i].Id;
        cout << "Enter Name: ";
        cin >> emps[i].Name;
        cout << "Enter Age: ";
        cin >> emps[i].Age;
    }
}

void NewMenu(Emp emps[]) {
    system("cls");
    int index;
    do {
        cout << "Please Enter your Place To Set Your Employee (1-5): ";
        cin >> index;
        index--;
        if (index >= 0 && index < 5) {
            if (emps[index].Id != -1) {
                system("cls");
                cout << "This Index already has an Employee. Replace him?\n(Enter 1 For yes) , (Enter 0 For No)\n";
                int flag;
                cin >> flag;
                if (flag == 0)
                    return;
            }
            cout << "\nEmp0" << index + 1 << "\nEnter Id: ";
            cin >> emps[index].Id;
            cout << "Enter Name: ";
            cin >> emps[index].Name;
            cout << "Enter Age: ";
            cin >> emps[index].Age;
        }
    } while (index < 0 || index >= 5);
}

void DisplayMenu(Emp emps[], int size) {
    system("cls");
    cout << "Employee List\n";
    for (int i = 0; i < size; i++) {
        if (emps[i].Id != -1) {
            cout << "Employee0" << i + 1 << ": ";
            PrintEmp(emps[i]);
        }
    }
}

void DeleteMenu(Emp emps[]) {
    int choice;
    cout << "Delete Menu:\n";
    cout << "1. Delete by ID\n";
    cout << "2. Delete by Name\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        DeleteById(emps);
        break;
    case 2:
        DeleteByName(emps);
        break;
    default:
        cout << "Invalid choice.\n";
    }
}

void DeleteById(Emp emps[]) {
    int id;
    cout << "Enter Id of Employee That You Want To Delete: ";
    cin >> id;
    for (int i = 0; i < 5; i++) {
        if (emps[i].Id == id) {
            emps[i].Id = -1;
            cout << "Employee deleted successfully.\n";
            return;
        }
    }
    cout << "Employee with Id " << id << " not found.\n";
}

void DeleteByName(Emp emps[]) {
    char Name[20];
    cout << "Enter Name of Employee That You Want To Delete: ";
    cin >> Name;
    for (int i = 0; i < 5; i++) {
        if (emps[i].Id != -1 && strcmp(emps[i].Name, Name) == 0) {
            emps[i].Id = -1;
            cout << "Employee deleted successfully.\n";
            return;
        }
    }
    cout << "Employee with Name " << Name << " not found.\n";
}

