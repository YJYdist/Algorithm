#include <cstdio>
using namespace std;
int a[3];
char s1, s2;
int main()
{
    while (scanf("%c:=%c;", &s1, &s2) == 2)                            // 充分利用c++语言优势
        a[s1 - 'a'] = s2 >= '0' && s2 <= '9' ? s2 - '0' : a[s2 - 'a']; // 赋值语句简洁明了
    printf("%d %d %d", a[0], a[1], a[2]);
    return 0;
}
