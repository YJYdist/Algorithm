#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    nums.push_back(n);
    int cnt = 1;
    while (n != 1)
    {
        if (n % 2 == 1)
        {
            n = n * 3 + 1;
        }
        else
        {
            n /= 2;
        }
        nums.push_back(n);
        cnt++;
    }

    for (int i = cnt - 1; i >= 0; i--)
    {
        cout << nums[i] << " ";
    }
    return 0;
}