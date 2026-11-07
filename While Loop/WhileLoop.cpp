#include <iostream>

using namespace std;

int main() //Time complexity : O(n)
{
    int num;
    cout << "Enter a number to print a table" << endl;
    cin >> num;

    int i = 1;
    while (i <= 10)
    {
        cout << num << " * " << i << " = " << num * i << "\n";
        i++;
    }
    return 0;
}