#include<iostream>

using namespace std;

/*
   1
  121
 12321
1234321

*/

int main()
{
    int n =4;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        //1st part
        for (int k = 1; k <= i+1; k++)
        {
            cout << k;
        }
        //2nd part
        for (int m = i; m > 0; m--)
        {
            cout << m;
        }
        cout << endl;
    }
    
}