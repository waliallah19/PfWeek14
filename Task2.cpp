#include<iostream>
using namespace std;
main()
{
    int number = 10;
    int *p = &number;
    cout<<"The address of variable: "<<p<<endl;
    cout<<"The value of variable: "<<*p<<endl;
}