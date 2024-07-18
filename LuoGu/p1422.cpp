#include<iostream>
using namespace std;
int main(){
    int num;
    double res;
    cin >> num;

    if(num <= 150){
        res = num * 0.4463;
    }else if(num <= 400){
        res = 150 * 0.4463 + (num - 150) * 0.4663;
    }else{
        res = 150 * 0.4463 + 250 * 0.4663 + (num - 400) * 0.5663;
    }

    printf("%.1f", res);

    return 0;
}