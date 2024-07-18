#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int maxLen = 0;
    int i = 0, j = 1;
    while (j < n)
    {
        if (nums[j] - nums[j - 1] == 1)
        {
            j++;
        }
        else
        {
            maxLen = j - i > maxLen ? j - i : maxLen;
            i = j;
            j++;
        }
    }
    maxLen = j - i > maxLen ? j - i : maxLen;
    cout << maxLen << endl;
    return 0;
}