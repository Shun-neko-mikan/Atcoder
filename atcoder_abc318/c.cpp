#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void){
    ll n,d,p;
    cin >> n >> d >> p;
    vector <ll> f(n);
    for(int i=0;i<n;i++){
        cin >> f[i];
    }
    sort(f.begin(), f.end(), greater<int>());
    ll ans = 0;
    int cnt = 0;
    ll tmp = 0;
    for(int i=0;i<n;i++){
        cnt++;
        tmp += f[i];
        if(cnt==d)
        {
            ans += min(tmp,p);
            tmp = 0;
            cnt = 0;
            // cout << ans << endl;
        }
    }
    ans += min(tmp,p);
    cout << ans << endl;
}