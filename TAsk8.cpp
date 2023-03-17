#include <iostream>
#include<conio.h>
#include <fstream>
using namespace std;
void loadData();
void processing(int);
void ticketBuy();
int row_input(string ticket_type);
void seeArrangement();
void storeData();
void newArrangement();
void makeChanges(int, char);
char arrangements[13][6] = {{'*', '*', '*', '*', '*', '*'},
                            {'*', '*', '*', '*', '*', '*'},
                            {'*', '*', '*', '*', '*', '*'},
                            {'*', '*', '*', '*', '*', '*'},
                            {'*', '*', '*', '*', '*', '*'},
                            {'*', '*', '*', '*', '*', '*'},
                            {'*', '*', '*', '*', '*', '*'},
                            {'*', '*', '*', '*', '*', '*'},
                            {'*', '*', '*', '*', '*', '*'},
                            {'*', '*', '*', '*', '*', '*'},
                            {'*', '*', '*', '*', '*', '*'},
                            {'*', '*', '*', '*', '*', '*'},
                            {'*', '*', '*', '*', '*', '*'}};
string ticket_type;
int row;
char column;
main()
{
    storeData();
    loadData();
    int choice;
    bool flag = true;
    char ch;
    while (flag == true)
    {
        cout << "                                                Main Menu" << endl;
        cout << "1. Buy Ticket" << endl;
        cout << "2. See Reserved Seats" << endl;
        cout << "3. New Plane arrangements" << endl;
        cout << "4. Exit" << endl;
        cout<<"Enter Your Choice: ";
        cin >> choice;
        if(choice == 4)
        {
            flag = false;
            break;
        }
        processing(choice);
        cout << "\nPress 1 if you want to exit or press any other key to continue...";
        ch = getch();
        if (ch == '1')
        {
            flag = false;
        }
    }
}
void processing(int choice)
{
    if (choice == 1)
    {
        ticketBuy();
    }
    else if (choice == 2)
    {
        seeArrangement();
    }
    else if (choice == 3)
    {
        newArrangement();
        cout<<"New plane Arrangements have been made.";
    }
}
void loadData()
{
  int i=0,j=0;;
  string record;
  fstream data;
  data.open("data.txt", ios::in);
  while (!(data.eof()))
  {
    getline(data,record);
    for(int z=0 ; z < record.length(); z++)
    {
        arrangements[i][j]=record[z];
        j++;
    }
    i++;
  }
}
void ticketBuy()
{
    string ticket_type;
    char column;
    int row;
    cout << "Enter Ticket Type (Class): ";
    cin >> ticket_type;
    row = row_input(ticket_type);
    cout << "Enter Desired Seat Column (A to F): ";
    cin >> column;
    makeChanges(row, column);
    storeData();
}
int row_input(string ticket_type)
{
    int row;
    if (ticket_type == "First")
    {
        cout << "Enter Desired Seat Row (1 or 2): ";
        cin >> row;
    }
    else if (ticket_type == "Business")
    {
        cout << "Enter Desired Seat Row (3 to 7): ";
        cin >> row;
    }
    else if (ticket_type == "Economy")
    {
        cout << "Enter Desired Seat Row (8 to 13): ";
        cin >> row;
    }
    return row;
}

void seeArrangement()
{
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << arrangements[i][j]<<"\t";
        }
        cout << endl;
    }
}
void storeData()
{
    fstream file;
    file.open("data.txt", ios ::out);
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            file << arrangements[i][j];
        }
        file<<endl;
    }
    file.close();
}

void makeChanges(int row, char column)
{
    int col;
    int d_row = row - 1;
    if (column == 'A')
    {
        col = 0;
    }
    else if (column == 'B')
    {
        col = 1;
    }
    else if (column == 'C')
    {
        col = 2;
    }
    else if (column == 'D')
    {
        col = 3;
    }
    else if (column == 'E')
    {
        col = 4;
    }
    else if (column == 'F')
    {
        col = 5;
    }
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == d_row && j == col)
            {
                arrangements[i][j] = 'X';
                break;
            }
        }
    }
}
void newArrangement()
{
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            arrangements[i][j] = '*';
        }
    }
}
