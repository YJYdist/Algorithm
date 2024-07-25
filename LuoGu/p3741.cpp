#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'V' && s[i + 1] == 'K')
        {
            s[i] = 'x';
            s[i + 1] = 'x';
            cnt++;
        }
        else if (s[i] == 'x')
        {
            continue;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'x')
        {
            continue;
        }
        else if (s[i] == 'V' && s[i + 1] == 'V')
        {
            cnt++;
            break;
        }
        else if (s[i] == 'K' && s[i + 1] == 'K')
        {
            cnt++;
            break;
        }
    }

    cout << cnt;
    return 0;
}