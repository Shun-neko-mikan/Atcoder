#include <bits/stdc++.h>
using namespace std;

#define CONSTNUM 998244353

int main(void){
    int q;
    cin >> q;
    string s = "1";
    for(int i = 0;i < q; i++){
        int que;
        char x;
        cin >> que;
        if (que == 1){
            cin >> x;
            s.push_back(x);
        }
        else if(que == 2){
            s.erase(0,1);
        }
        else{
            long long int ans = stoll(s);
            ans = ans % CONSTNUM;
            cout << ans << endl;
        }
    }
}