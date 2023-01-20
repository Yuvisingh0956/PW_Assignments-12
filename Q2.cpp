//Q2 - A square matrix is said to be an perfect Matrix if both of the following conditions hold:
//a) All the elements in the diagonals of the matrix are non-zero integers.
//b) All other elements except the diagonal elements are 0.
///Given a 2D integer array grid of size n x n representing a square matrix, return true if grid is a perfect matrix. Otherwise, return false using functions.

#include <iostream>
#include <vector>
using namespace std;

bool Perfect(vector<vector<int>> v, int n);

int main()
{
    int n;
    cout<<"Enter the size of square matrix: ";
    cin>>n;

    vector<vector<int>> perfectMatrix(n, vector<int> (n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"Enter element of matrix: ";
            cin>> perfectMatrix[i][j];
        }
        cout<<endl;
    }

    bool ans = Perfect(perfectMatrix,n);

    if (ans)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}

bool Perfect(vector<vector<int>> v, int n)
{
    bool ans1 = true, ans2 = true, ans3 = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (v[i][j] == 0)
                {
                    ans1 = false;
                }
            }

            else if (i + j == n-1)
            {
                if (v[i][j] == 0)
                {
                    ans2 = false;
                }
            }

            else
            {
                if (v[i][j] != 0)
                {
                    ans3 = false;
                }
            }
        }
    }
    if (ans1 == true && ans2 == true && ans3 == true)
    {
        return true;
    }

    else
    {
        return false;
    }
}