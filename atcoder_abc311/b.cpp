#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int n,d;
    cin >> n >> d;
    vector <string> s(n);
    rep(i, n){
        cin >> s[i];
    }
    int ans = 0;
    int tmp = 0;
    for(int i = 0; i < d; i++){
        bool flag = true;
        for(int j = 0; j < n; j++){
            if(s[j][i] == 'x'){
                flag = false;
                break;
            }
        }
        if(flag){
            tmp++;
        }else{
            ans = max(ans, tmp);
            tmp = 0;
        }
    }
    ans = max(ans, tmp);
    cout << ans << endl;
    return 0;

}