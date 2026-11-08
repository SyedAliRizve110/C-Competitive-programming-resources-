#include<iostream>

using namespace std;
int main()
{
    int n=4;
    for(int i=1; i<=n; i++) //outer loop for rows
    {
        for(int j = 1; j<=n; j++) //inner loop for columns
        {
            cout << j << " ";
        }
        cout<< endl; // also can be use "\n";
    }

} //time complexity = O(n^2)

