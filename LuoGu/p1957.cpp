#include <bits/stdc++.h>
using namespace std;
int n;
char c, ch;
int a, b, q;
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> c;
        a = 0, b = 0;
        if (isdigit(c))
        {
            a += c - '0';
            c = getchar();
            while (c != ' ')
            {
                a = a * 10 + c - '0';
                c = getchar();
            }
            cin >> b;
        }
        else
        {
            ch = c, cin >> a >> b;
        }
        if (ch == 'a')
            cout << a << "+" << b << "=" << a + b << endl, q = a + b;
        if (ch == 'b')
            cout << a << "-" << b << "=" << a - b << endl, q = a - b;
        if (ch == 'c')
            cout << a << "*" << b << "=" << a * b << endl, q = a * b;
        int len = 0;
        if (a == 0)
            len++;
        else
            while (a)
                a /= 10, len++;
        if (b == 0)
            len++;
        else
            while (b)
                b /= 10, len++;
        if (q < 0)
            len++, q = -q;
        if (q == 0)
            len++;
        else
            while (q)
                q /= 10, len++;
        cout << len + 2 << endl;
    }
    return 0;
}