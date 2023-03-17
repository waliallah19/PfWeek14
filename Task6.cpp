#include<iostream>
using namespace std;
void mergeArrays(int arr1[],int rows1,int arr2[],int rows2,int arr3[],int size3);
main()
{
    int size1=3,size2=3;
    int size3 = size1+size2;
    int arr1[size1]={1,2,3};
    int arr2[size2]={4,5,6};
    int arr3[size3];
    mergeArrays(arr1,size1,arr2,size2,arr3,size3);
    for(int z=0; z<size3;z++)
    {
        cout<<arr3[z]<<" ";
    }
}
void mergeArrays(int arr1[],int rows1,int arr2[],int rows2,int arr3[],int size3)
{
    for(int i = 0; i<rows1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int j = 0; j < rows2; j++)
    {
        arr3[rows1+j]=arr2[j];
    }
}