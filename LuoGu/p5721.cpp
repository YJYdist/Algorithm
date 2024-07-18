#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 1;
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j-- ){
            printf("%02d", cnt++);
        }
        printf("\n");
    }
    return 0;
}