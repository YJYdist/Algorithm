#include <iostream>
#include <string>
using namespace std;
int main()
{
    int upper = 'A' - 'a';
    string input;
    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            input[i] += upper;
        }
    }

    cout << input;
    return 0;
}