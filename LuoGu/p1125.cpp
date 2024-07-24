#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
const unordered_set<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
int sum[26];
int main()
{
    string in;
    cin >> in;

    string success = "Lucky Word";
    string failure = "No Answer";

    for (int i = 0; i < in.size(); i++)
    {
        sum[in[i] - 'a']++;
    }

    int max = 0, min = 100;
    for (int i = 0; i < 26; i++)
    {
        if (sum[i] > max)
            max = sum[i];
        if (sum[i] < min && sum[i] != 0)
            min = sum[i];
    }

    // cout << max << min << endl;
    if (prime.count(max - min))
    {
        cout << success << endl
             << max - min;
    }
    else
    {
        cout << failure << endl
             << 0;
    }
    return 0;
}