// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string first;
//     cin >> first;

//     int n = first.size();
//     int m = n;
//     n--;

//     while (n--)
//     {
//         string temp;
//         cin >> temp;
//         first += temp;
//     }
//     cout << m << " ";

//     int r = 1, l = 0;
//     while (r < m * m)
//     {
//         if (first[l] == first[r])
//         {
//             r++;
//         }
//         else
//         {
//             cout << r - l << " ";
//             l = r++;
//         }
//     }
//     cout << r - l << " ";
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, num, sum;
    char text[40000], str[200]; // text：最终字符串，str：缓冲字符串
    scanf("%s", str);
    n = strlen(str);         // 输入第一个字符串，存入缓冲字符串，并计算n值
    strcat(text, str);       // 将str连接到text后，其实也可以用strcpy的，用处相同
    for (i = 2; i <= n; i++) // 因为已经连接第一个了，因此循环从第二行字符开始
    {
        scanf("%s", str);
        strcat(text, str); // 输入并连接
    }
    printf("%d ", n);                                       // 输出n值，记住在每个输出后带上空格
    for (i = 0, sum = 0, num = '0'; i <= strlen(text); i++) // 从text[i]开始循环
        if (num == text[i])
            // 判断这个字符是否与上一个字符相等（第一个字符与‘0’做判断）
            sum++; // 如果相等，sum加一
        else
        {
            num = text[i];
            printf("%d ", sum); // 反之，输出sum值（带空格），并初始化num与text
            sum = 1;
        }
    return 0;
}