#include<iostream>

using namespace std; // time complexity = O(n^2)
int main()
{
    int n=4;
    for(int i=0; i<n; i++) //outer loop for rows
    {
        for (int j=1;j<=i;j++)
        {
            cout << " ";
        }
        for(int j = 0; j<n-i; j++) //inner loop for columns
        {
            cout << i+1;
        }
        cout<< endl; // also can be use "\n";
    }

}