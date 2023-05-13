#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = false;
    int ans = 0;
    for(int i = 0;i < n; i++){
        if(s[i] == '|'){
            flag ^= true;
        }
        if(flag && s[i] == '*'){
            ans++;
        }
    }
    if(ans == 1){
        cout << "in" << endl;
    }
    else{
        cout << "out" << endl;
    }
}