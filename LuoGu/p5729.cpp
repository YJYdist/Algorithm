#include <iostream>
using namespace std;

int mark[21][21][21];
int main()
{
    int w, x, h;
    cin >> w >> x >> h;
    int ans = w * x * h;
    int q;
    cin >> q;

    while (q--)
    {
        int one[3];
        int second[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> one[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> second[i];
        }

        for (int i = one[0]; i <= second[0]; i++)
        {
            for (int j = one[1]; j <= second[1]; j++)
            {
                for (int k = one[2]; k <= second[2]; k++)
                {
                    if (mark[i][j][k] != 1)
                    {
                        ans--;
                        mark[i][j][k] = 1;
                    }
                }
            }
        }
    }

    cout << ans;
    return 0;
}