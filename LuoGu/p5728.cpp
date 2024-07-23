#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> data(n, vector<int>(4));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> data[i][j];
            data[i][3] += data[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int a = abs(data[i][0] - data[j][0]);
            int b = abs(data[i][1] - data[j][1]);
            int c = abs(data[i][2] - data[j][2]);
            int d = abs(data[i][3] - data[j][3]);
            if (a <= 5 && b <= 5 && c <= 5 && d <= 10)
            {
                ans++;
            }
        }
    }

    cout << ans;
    return 0;
}