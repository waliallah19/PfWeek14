#include<iostream>
using namespace std;
bool checkSparse(int arr[][3],int rows);
main()
{
    bool decsion;
    int matrix[3][3]={{0,1,2},
                      {1,0,0},
                      {0 ,0,3}};
    decsion = checkSparse(matrix,3);
    if(decsion == true)
    {
        cout<<"The matrix is a Sparse matrix."<<endl;
    }
    else
    {
        cout<<"The matrix is not a Sparse matrix."<<endl;
    }
}
bool checkSparse(int arr[][3],int rows)
{
    int count = 0,c;
    for(int i = 0; i < rows; i++)
    {
        for(int j=0; j<3;j++)
        {
            if(arr[i][j]==0)
            {
                count++;
            }
        }
    }
    c = (rows*3)/2;
    if(count > c)
    {
        return true;
    }
    else
    {
        return false;
    }
}