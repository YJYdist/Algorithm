#include <iostream>
#include <vector>
using namespace std;
// 判断是否为素数
bool judge(int num)
{
    if (num < 2)
        return false;
    if (num == 2)
        return true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    // n 输入的正整数, cnt 记录有多少个素数
    int n, cnt = 0, sum = 0;
    cin >> n;
    // res 用来存储素数
    vector<int> res;
    // 如果是素数就放入res
    for (int i = 2; i <= n; i++)
    {
        if (judge(i))
        {
            sum += i;
            // 如果超过 n 就退出循环
            if (sum > n)
            {
                break;
            }
            res.push_back(i);
            cnt++;
        }
    }
    // 打印
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    cout << cnt << endl;
    return 0;
}