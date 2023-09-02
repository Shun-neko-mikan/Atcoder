#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void){
    ll n,m,p;
    cin >> n >> m >> p;
    int ans = 0;
    for(ll i=1;i<=n;i++){
        if(i == m){
            ans++;
            m += p;
        }
    }
    cout << ans << endl;
}