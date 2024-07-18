#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums[1001] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums, nums + n);
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        ans += nums[i];
    }

    printf("%.2f", ans * 1.0 / (n - 2));
    return 0;
}