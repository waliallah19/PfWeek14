#include<iostream>
using namespace std;
float averageOfArray(int arr[],int size)
{
    int sum = 0;
    for(int i = 0; i<size; i++)
    {
        sum = sum+arr[i];
    }
    return sum/size;
}
main()
{
    int size = 3;
    int numbers[size]={1,2,3};
    float avg = averageOfArray(numbers,size);
    cout<<avg;
}