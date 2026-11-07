#include<iostream>

using namespace std;

int main() //time complexity: O(n)
{
    int n;
    cout<< "Enter the number:\n";
    cin >> n;

    int sum = 0;
    int i=1;
    while(i<=n)
    {
        sum += i;
        i++;
    }
    cout << "sum of numbers: " << sum;
}