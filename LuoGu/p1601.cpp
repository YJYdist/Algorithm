#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string add(string a, string b)
{

    int max_len = a.size() > b.size() ? a.size() : b.size();
    string ans(max_len, ' ');
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int carry = 0;
    for (int i = 0; i < max_len; i++)
    {
        int num1 = i < a.size() ? a[i] - '0' : 0;
        int num2 = i < b.size() ? b[i] - '0' : 0;
        int num3 = (num1 + num2 + carry) % 10;

        carry = (num1 + num2 + carry) / 10;
        ans[i] = num3 + '0';
    }

    if (carry == 1)
    {
        ans.push_back('1');
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    string a, b;
    cin >> a >> b;
    string res = add(a, b);
    cout << res;
    return 0;
}