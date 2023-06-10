#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;
    vector <vector <int>> a(m,vector <int> (n));
    vector <set <int>> b(n+1);
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            if(j == 0){
                b[a[i][j]].insert(a[i][j+1]);
                continue;
            }
            else if(j == n-1){
                b[a[i][j]].insert(a[i][j-1]);
                continue;
            }
            else{
                b[a[i][j]].insert(a[i][j-1]);
                b[a[i][j]].insert(a[i][j+1]);
            }
        }
    }
    int ans = 0;
    for(int i = 1;i < n+1;i++){
        if(b[i].size() != n-1){
            ans += n-1-b[i].size();
        }
    }
    ans /= 2;
    cout << ans << endl;
    
    return 0;
}