//Q1 - Write a user defined function upper() which takes an integer square matrix as an input and its size N and prints the upper half of the matrix.

#include <iostream>
#include <vector>
using namespace std;

void upper(vector<vector<int>> &v,int n);
int main()
{
    int n;
    cout<<"Enter the size of square matrix: ";
    cin>>n;

    vector<vector<int>> upperMatrix(n, vector<int> (n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"Enter element of matrix: ";
            cin>> upperMatrix[i][j];
        }
        cout<<endl;
    }

    upper(upperMatrix,n);

    return 0;
}

void upper(vector<vector<int>> &v,int n)
{
    cout<<"The upper half of matrix is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j)
            {
                cout<<v[i][j]<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return;
}