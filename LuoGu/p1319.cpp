#include <iostream>
using namespace std;
int s[201][201];
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    int t = 0;
    while (cnt != n * n)
    {
        int num;
        cin >> num;
        for (int i = cnt; i < cnt + num; i++)
        {
            int temp = i % n;
            int h = i / n;
            s[h][temp] = t % 2;
        }
        cnt += num;
        t++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << s[i][j];
        }
        cout << endl;
    }

    return 0;
}