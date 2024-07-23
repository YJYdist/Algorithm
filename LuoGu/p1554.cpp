#include <iostream>
using namespace std;
int mark[10];

void count(int num)
{
    while (num)
    {
        int target = num % 10;
        num /= 10;
        mark[target]++;
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        count(i);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << mark[i] << " ";
    }

    return 0;
}