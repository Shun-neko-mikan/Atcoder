#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    string s;
    cin >> n;
    cin >> s;
    bool flag = false;
    bool flag2 = true;
    for(int i = 0;i < n; i++){
        if(s[i] == 'o'){
            flag = true;
        }
        if(s[i] == 'x'){
            flag2 = false;
        }
    }

    if(flag && flag2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}