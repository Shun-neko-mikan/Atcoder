#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;
    vector <string> s(n);
    vector <vector <int> > snum(n,vector <int>(26));
    for(int i = 0;i < n; i++){
        cin >> s[i];
    }
    for(int i = 0;i < n; i++){
        for(int j = 0;j < m; j++){
            snum[i][s[i][j] - 'a']++;
        }
    }

}