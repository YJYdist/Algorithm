#include <iostream>
#include <unordered_set>
using namespace std;

int ans[8];
int main()
{
    int n;
    cin >> n;

    int in[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> in[i];
    }
    unordered_set<int> target(in, in + 7);

    while (n--)
    {
        int cnt = 0;
        int input;
        for (int i = 0; i < 7; i++)
        {
            cin >> input;
            if (target.count(input))
            {
                cnt++;
            }
        }

        ans[7 - cnt]++;
    }

    for (int i = 0; i < 7; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}