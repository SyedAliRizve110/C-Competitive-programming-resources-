#include <iostream>

using namespace std;
int main() //Time complexity : O(n)
{
    int n;
    cout << "Enter the number n\n";
    cin >> n;
    int sum =0;
    for(int i= 1; i <=n; i++)
    {
        sum += i;
    }
            cout << "The sum of total n:" << sum;
    return 0;
}
