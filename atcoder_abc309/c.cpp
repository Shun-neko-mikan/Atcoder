#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long n,k;
    cin >> n >> k;
    vector <pair<long long, long long>> a(n);
    
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    long long ans = 0;
    int cnt = 0;
    for(auto itr = a.rbegin(); itr != a.rend(); itr++){
        if((ans+itr->second) <= k){
            ans += itr->second;
        }
        else{
            cout << (itr->first) + 1 << endl;
            return 0;
        }
        cnt++;
    }
    cout << 1 << endl;

    return 0;
}