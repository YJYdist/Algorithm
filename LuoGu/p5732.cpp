#include <iostream>
using namespace std;

int s[21][21];
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            s[i][j] = s[i - 1][j - 1] + s[i - 1][j];
            if (s[i][j] == 0)
            {
                s[i][j] = 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}