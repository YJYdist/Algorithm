#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int a[100 + 5][100 + 5]; // 定义一个坐标
int main()
{
    int n, m, k, x, y, ans = 0;
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        x++;
        y++;
        // 输入火把的坐标
        for (int j = x - 1; j <= x + 1; j++)
            for (int k = y - 1; k <= y + 1; k++)
                a[j][k] = 1;

        a[x - 2][y] = 1, a[x + 2][y] = 1, a[x][y - 2] = 1, a[x][y + 2] = 1;
    }
    for (int i = 1; i <= k; i++)
    {
        cin >> x >> y; // 输入萤石的坐标
        x++;
        y++;
        for (int j = x - 2; j <= x + 2; j++)
            for (int k = y - 2; k <= y + 2; k++)
                a[j][k] = 1;
    }
    // 搜索如果有没亮的格子答案+1
    for (int i = 2; i <= n + 1; i++)
        for (int j = 2; j <= n + 1; j++)
            if (a[i][j] == 0)
                ans++;
    cout << ans << endl;
    return 0;
}