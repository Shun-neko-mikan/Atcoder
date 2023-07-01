#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,k,q;
    cin >> n >> k >> q;
    vector <int> x(q);
    vector <unsigned long long> y(q);
    vector <long long> a(n,0);
    for(int i = 0; i < q; i++){
        cin >> x[i] >> y[i];
    }
    // aを降順にソートする
    sort(a.begin(), a.end(), greater<long long>());

    for(int i = 0; i < q; i++){
        a[x[i]-1] = y[i];
        long long ans = accumulate(a.begin(), a.end(), 0);
        // for(int j = 0; j < n; j++){
        //     cout << a[j] << " ";
        // }
        // cout << endl;
        cout << ans << endl;
    }
}