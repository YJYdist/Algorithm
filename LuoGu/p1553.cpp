#include <string>
#include <iostream>
#include <algorithm>

// 自己写的反转函数，返回反转并去掉前导零之后的字符串
std::string reverse(std::string s)
{
    int zeroCount = 0;
    std::reverse(s.begin(), s.end()); // 反转
                                      // 范围 for 循环，用于统计前导零个数
    for (auto i : s)
        if (i == 48)
            ++zeroCount;
        else
            break;
    s.erase(s.begin(), s.begin() + zeroCount);
    return (s != "" ? s : "0"); // 特判
}

// 用于去掉后导零
std::string deleteTail(std::string s)
{
    int zeroCount = 0;
    for (int i = s.size() - 1; i >= 0; --i)
        if (s[i] == 48)
            ++zeroCount;
        else
            break;
    s.erase(s.end() - zeroCount, s.end());
    return (s != "" ? s : "0");
}

int main()
{
    std::string s;
    std::cin >> s;
    if (s.back() == '%')
    {
        std::cout << reverse(s.substr(0, s.size() - 1)) << "%" << std::endl;
        return 0;
    }
    for (auto i : s)
    {
        std::string left, right;
        // 其实还有一种不需要遍历字符串的做法，直接 find() 即可，但是当时没想到
        if (i == '/')
        {
            left = s.substr(0, s.find("/"));
            right = s.substr(s.find("/") + 1);
            std::cout << reverse(left) << "/" << reverse(right) << std::endl;
            return 0;
        }
        if (i == '.')
        {
            left = s.substr(0, s.find("."));
            right = s.substr(s.find(".") + 1);
            std::cout << reverse(left) << "." << deleteTail(reverse(right)) << std::endl;
            return 0;
        }
    }
    // 最后剩下的一种情况是正整数
    std::cout << reverse(s) << std::endl;
    return 0;
}