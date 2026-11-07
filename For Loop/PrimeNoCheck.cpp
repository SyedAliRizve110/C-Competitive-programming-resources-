#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number to check:\n";
    cin >> n;
    int isPrime = true;
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "Number is prime";
    }
    else
    {
        cout << "Number is not prime";
    }
    
}