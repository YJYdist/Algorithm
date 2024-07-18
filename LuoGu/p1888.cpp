#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num[3];
    for(int i = 0; i < 3; i++){
        cin >> num[i];
    }
    sort(num, num + 3);

    for(int i = 2; i <= num[0]; i++){
        if(num[0] % i == 0 && num[2] % i == 0){
            num[0] /= i;
            num[2] /= i;
        }
    }

    printf("%d/%d", num[0], num[2]);
    return 0;
}