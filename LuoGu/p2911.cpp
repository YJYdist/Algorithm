#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <string>
#include <map>
using namespace std;
inline int read()
{
    int f = 1, num = 0;
    char rd = getchar();
    while (!isdigit(rd))
    {
        if (rd == '-')
            f = -1;
        rd = getchar();
    }
    while (isdigit(rd))
    {
        num = num * 10 + rd - 48;
        rd = getchar();
    }
    return f * num;
}
struct num
{
    int ti, nu;
};
bool cmp(num a, num b)
{
    return a.ti != b.ti ? a.ti > b.ti : a.nu < b.nu;
}
num book[101];
int main()
{
    for (int i = 1; i <= 100; i++)
        book[i].nu = i;
    int a = read(), b = read(), c = read();
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                book[i + j + k].ti++;
            }
        }
    }
    sort(book, book + 100, cmp);
    printf("%d", book[0].nu);
    return 0;
}