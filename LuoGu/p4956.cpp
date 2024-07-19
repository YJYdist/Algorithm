#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int target = n / 52;
    // cout << target;
    int k = 1, x;
    for (;; k++)
    {
        if ((target - 21 * k) % 7 == 0)
        {
            x = (target - 21 * k) / 7;
            if (x > 100)
                continue;
            break;
        }
    }
    cout << x << endl
         << k << endl;
    return 0;
}