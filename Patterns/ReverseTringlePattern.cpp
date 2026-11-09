#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    for(int i = 0; i<n; i++)
    {
        int num =i+1;
        for (int j = 0; j <i+1; j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
    //with backword loop
    for(int i = 0; i<n; i++)
    {
        for(int j =i+1; j>0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // reverse character pattern
    /*
    A
    B A
    C B A
    D C B A
    */
    for(int i=0; i<n; i++)
    {
       // char c ='A';
        for(int j =i+65; j>=65; j--)
        {   
            cout << char(j) << " ";
        }
        cout << endl;
    }
}