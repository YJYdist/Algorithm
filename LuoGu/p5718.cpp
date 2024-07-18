#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> num = vector<int>(n);
    for(int i = 0; i < n ;i++){
        cin >> num[i];
    }
    sort(num.begin(), num.end());
    cout << num[0];
    return 0;

}