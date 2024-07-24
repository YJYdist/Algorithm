#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string in;
    cin >> in;

    for (int i = 0; i < in.size(); i++)
    {
        in[i] = in[i] + n > 'z' ? in[i] + n - 'z' + 'a' - 1 : in[i] + n;
    }

    cout << in;
    return 0;
}