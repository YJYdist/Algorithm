#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num[3];
    for(int i = 0 ; i < 3; i++){
        cin >> num[i];
    }
    sort(num, num + 3);
    char str[3];
    for(int i = 0 ; i< 3; i++){
        cin >> str[i];
    }
    for(int i = 0 ; i < 3; i++){
        if(str[i] == 'C'){
            cout << num[2] << " " ;
        }else if(str[i] == 'B'){
            cout << num[1] << " ";
        }else{
            cout << num[0] << " ";
        }
    }
    return 0;
}