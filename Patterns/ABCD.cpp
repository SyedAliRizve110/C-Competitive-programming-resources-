#include<iostream>

using namespace std; // time complexity = O(n^2)
int main()
{
    int n=4;
    for(int i=0; i<n; i++) //outer loop for rows
    {
        char ch = 'A';
        for(int j = 0; j<n; j++) //inner loop for columns
        {
            cout << ch << " ";
            ch += 1;
        }
        cout<< endl; // also can be use "\n";
    }

}
