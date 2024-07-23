#include <iostream>
using namespace std;

bool light[2000000];
int main()
{
    int n;
    cin >> n;

    int max_len = 0;
    while (n--)
    {
        double a;
        int t;
        cin >> a >> t;
        if ((int)(a * t) > max_len)
        {
            max_len = (int)(a * t);
        }

        for (int i = 1; i <= t; i++)
        {
            int target = (int)(i * a);
            light[target] = !light[target];
        }
    }

    for (int i = 1; i <= max_len; i++)
    {
        if (light[i])
        {
            cout << i;
            return 0;
        }
    }

    return 0;
}