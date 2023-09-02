#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;
    vector <string> c(n);
    vector <string> d(m);
    vector <int> p(m+1);
    for(int i=0; i<n; i++){
        cin >> c[i];
    }
    for(int i=0; i<m; i++){
        cin >> d[i];
    }
    for(int i=0; i<m+1; i++){
        cin >> p[i];
    }
    int ans = 0;

    for(int i=0; i<n; i++){
        bool flag = true;
        for(int j=0; j<m+1; j++){
            if(c[i] == d[j]){
                ans += p[j+1];
                flag = false;
                break;
            }
        }
        if(flag){
            ans += p[0];
        }
        // cout << ans << endl;
    }
    cout << ans << endl;

}