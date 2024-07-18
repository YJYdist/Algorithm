#include <iostream>
using namespace std;
int main()
{
    int k = 0;
    cin >> k;
    int cnt = 0;
    int day = 1;
    int res = 0;
    while (cnt <= k)
    {
        for (int i = 1; i <= day; i++)
        {
            if (cnt + i > k)
            {
                cout << res;
                return 0;
            }
            res += day;
        }
        cnt += day;
        day++;
    }

    cout << res;
    return 0;
}