#include<iostream>

using namespace std; // time complexity = O(n^2)
    int main()
    {
        int n =3;
        int p =1;
        for(int i = 0; i<n; i++)
        {
            for (int j = 0; j<n; j++)
            {
                cout << p << " ";
                p++;
            }
                        cout << endl;
        }
    }
 // namespace std;
