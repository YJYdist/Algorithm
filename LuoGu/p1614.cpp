#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> nums(n + 1);

    // 用前缀和
    nums[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int target;
        cin >> target;
        nums[i] = nums[i - 1] + target;
    }

    int ans = INT32_MAX;
    for (int i = 0; i <= n - m; i++)
    {
        if (nums[i + m] - nums[i] < ans)
        {
            ans = nums[i + m] - nums[i];
        }
    }

    cout << ans;
    return 0;
}