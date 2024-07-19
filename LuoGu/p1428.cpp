#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> fishes(n);
    fishes[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> fishes[i];
    }
    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j <= i; j++)
        {
            if (fishes[j] < fishes[i])
            {
                cnt++;
            }
        }
        res[i] = cnt;
    }

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}