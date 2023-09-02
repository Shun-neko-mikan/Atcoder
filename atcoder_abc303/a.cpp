#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    string s,t;
    cin >> n >> s >> t;
    bool flag = false;
    for(int i = 0;i < n;i++){
        flag =  false;
        if(s[i] == t[i]){
            flag = true;
            continue;
        }
        if((s[i] == '1' && t[i] == 'l') || (s[i] == 'l' && t[i] == '1')){
            flag = true;
            continue;
        }
        if((s[i] == '0' && t[i] == 'o') || (s[i] == 'o' && t[i] == '0')){
            flag = true;
            continue;
        }
        if(!flag) break;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;    
}