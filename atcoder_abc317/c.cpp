#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const ll INF = 1LL << 60;

int main(void){
    int n,m;
    cin >> n >> m;
    vector <vector <pair<int,ll>>> load(n+1);
    int a,b;
    ll c;
    for(int i=0;i<m;i++){
        cin >> a >> b >> c;
        load[a].push_back(make_pair(b,c));
        load[b].push_back(make_pair(a,c));
    }
    // 全ての道順を考える
    vector <vector <int>> all_route;
    for(int i=1;i<=n;i++){
        
    }
}