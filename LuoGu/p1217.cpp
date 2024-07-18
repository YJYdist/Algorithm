/*
以下做法会超时
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
*/

/*依然有超时的情况*/
#include <vector>
#include <iostream>
using namespace std;
// 判断位数(除了11之外,所有回文素数的位数都不是偶数)
bool judge_weishu(int k)
{
    if (k >= 10 && k < 100 && k != 11 || k >= 1000 && k < 10000)
        return false;
    if (k >= 100000 && k < 1000000 || k >= 10000000 && k < 100000000)
        return false;
    return true;
}

// 判断回文
bool judge_huiwen(int k)
{

    int a[10], i = 0;
    while (k > 0)
    {
        a[i] = k % 10;
        k /= 10;
        i++;
    }
    for (int j = 0; j < i; j++)
        if (a[j] != a[i - j - 1])
            return false;
    return true;
}
// 判断素数
bool judge_sushu(int num)
{
    if (num == 2)
    {
        return true;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cin >> a >> b;

    vector<int> res;

    for (int i = a; i <= b; i++)
    {
        if (judge_weishu(i) && judge_huiwen(i) && judge_sushu(i))
        {
            res.push_back(i);
        }
    }

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }

    return 0;
}