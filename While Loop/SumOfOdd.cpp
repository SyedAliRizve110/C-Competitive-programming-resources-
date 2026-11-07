#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the number: \n";
    cin >> n;
    int sum = 0;

    // for(int i =1; i<=n; i+=2)
    //{
    //        sum += i;
    //}
    int i = 1;
    while (i <= n)
    {
        sum += i;
        i += 2;
    }

    cout << "Sum of odd numbers equals:" << sum;
}
