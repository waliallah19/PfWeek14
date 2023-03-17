#include<iostream>
using namespace std;
void swapNumbers(int &number1, int &number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;
}
main()
{
    int number1 = 10;
    int number2 = 20;
    swapNumbers(number1,number2);
    cout<<"Number1: "<<number1<<endl;
    cout<<"Number2: "<<number2<<endl;
}