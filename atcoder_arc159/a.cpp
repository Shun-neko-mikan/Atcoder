#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,k;
    cin >> n >> k;
    vector <vector <int>> Graph(n+1);
    vector <vector <int>> a(n, vector<int>(n));
    for(int i = 0;i < n; i++){
        for(int j = 0;j < n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                Graph[i+1].push_back(j+1);
                Graph[j+1].push_back(i+1);
            }
        }
    }
    int q;
    cin >> q;
    vector <long long> s(q);
    vector <long long> t(q);
    for(int i = 0;i < q; i++){
        cin >> s[i] >> t[i];
    }
    vector <vector <int>> ans(n, vector<int>(n,-1));



    return 0;
}