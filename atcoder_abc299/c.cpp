#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = -1;
    int tmp = 0;
    bool flag = false;
    bool flag2 = false;
    if(s[0] == '-'){
        for(int i = 1;i < n; i++){
            if(s[i] == 'o'){
                tmp++;
                flag2 = true;
            }
            else{
                if(flag2){
                    ans = max(ans, tmp);
                    tmp = 0;
                }
            }
        }
        if(flag2){
            ans = max(ans,tmp);
        }
    }
    else{
        for(int i = 0;i < n; i++){
            if(s[i] == 'o'){
                tmp++;
            }
            else{
                ans = max(ans, tmp);
                tmp = 0;
                flag = true;
            }
        }
        if(flag){
            ans = max(ans,tmp);
        }
    }
    if(n==1){
        ans=-1;
    }
    cout << ans << endl;
}