#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 判断是否是回文素数
bool judge(int num)
{
    // 特殊情况
    if (num == 2)
    {
        return true;
    }

    // 判断是否是素数
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    // 如果小于10, 那么必定回文
    if (num < 10)
    {
        return true;
    }
    else
    {
        string s = to_string(num);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[s.length() - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    // 输入范围边界
    int a, b;
    cin >> a >> b;
    // res 用来存储回文素数
    vector<int> res;

    // 循环判断
    for (int i = a; i <= b; i++)
    {
        if (judge(i))
        {
            res.push_back(i);
        }
    }

    // 输出
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }

    return 0;
}