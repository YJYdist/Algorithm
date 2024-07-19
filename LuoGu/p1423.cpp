#include <iostream>
using namespace std;
int main()
{
    double target;
    cin >> target;

    double step = 2;
    double dist = 0;
    int cnt = 0;
    while (dist < target)
    {
        dist += step;
        cnt++;
        step *= 0.98;
    }
    cout << cnt;
    return 0;
}