#include <iostream>
using namespace std;
void leftRotate(int arr[], int n, int arr1[], int n1);
main()
{
    int arr1[9];
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    leftRotate(arr, 9, arr1,9);
    for (int z = 0; z < 9; z++)
    {
        cout << arr1[z] << " ";
    }
}
void leftRotate(int arr[], int n, int arr1[], int n1)
{
    int position, a = 0;
    cout << "Enter the number of positions you want to rotate: ";
    cin >> position;
    for (int i = position; i < n; i++)
    {
        arr1[a] = arr[i];
        a++;
    }
    int b = 0;
    for (int i = n - position; i < n; i++)
    {
        arr1[i] = arr[b];
        b++;
    }
}