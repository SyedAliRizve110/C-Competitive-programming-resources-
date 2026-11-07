#include <iostream>

using namespace std;

int main() { //Time complexity : O(1)
    char alphabet;
    cout << "Enter your character: ";
    cin >> alphabet;
    if(alphabet >= 65 && alphabet <= 89) //implicit conversion of char to int
    {
        cout << "Given character is uppercase" << endl;
    }
    else if(alphabet >= 97 && alphabet <= 122)
    {
        cout << "Given character is lowercase" << endl;
    }
    else
    {
        cout << "Given character is not an alphabet" << endl;
    }
    return 0;

}
