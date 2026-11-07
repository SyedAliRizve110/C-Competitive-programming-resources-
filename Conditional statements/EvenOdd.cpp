#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;
    if(num % 2 == 0)
    {
        cout << "Given number is even\n" << endl;
    }
    else
    {
        cout << "Given number is odd" << endl;
    }

}

//Time complexity : O(1)