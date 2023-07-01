#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,k,q;
    cin >> n >> k >> q;
    vector <int> x(q);
    vector <long long> y(q);
    vector <long long> a(n,0);
    set <long long> b;
    vector <long long> tmp(k);
    
    for(int i = 0; i < q; i++){
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < q; i++){
        a[x[i]-1] = y[i];
        long long ans = 0;
        
        cout << ans << endl;
    }
}