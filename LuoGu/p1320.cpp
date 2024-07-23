#include <iostream>
#include <string>
using namespace std;
int main()
{
    string first;
    cin >> first;

    int n = first.size();
    n--;

    while (n--)
    {
        string temp;
        cin >> temp;
        first += temp;
    }
    cout << n << " ";
    int r = 0, l = 1;
    for (int i = 0; i < n * n; i++)
    {
        if (first[l] == first[r])
        {
            l++;
        }
        else
        {
            cout << l - r << " ";
            r = l;
            l++;
        }
    }
    cout << l - r;
    return 0;
}