#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(void){
    int n1,n2,m;
    cin >> n1 >> n2 >> m;
    vector <int> a(m);
    vector <int> b(m);
    vector <vector <int>> gf(n1+n2+1);
    for(int i=0; i<m; i++){
        cin >> a[i] >> b[i];
        gf[a[i]].push_back(b[i]);
        gf[b[i]].push_back(a[i]);
    }


    vector<int> dist(n1+n2+1, INF);
    priority_queue<pair<int, int>> pq;
    dist[1] = 0;
    pq.push(make_pair(0, 1));
    while (!pq.empty()) {
        int d = -pq.top().first;
        int v = pq.top().second;
        pq.pop();
        if (dist[v] < d) continue;
        for (int i = 0; i < gf[v].size(); i++) {
            int u = gf[v][i];
            int c = 1;
            if (u > n1) c = 2;
            if (dist[u] > dist[v] + c) {
                dist[u] = dist[v] + c;
                pq.push(make_pair(-dist[u], u));
            }
        }
    }

    if (dist[n1] == INF) {
        cout << -1 << endl;
    } else {
        cout << dist[n1] / 2 << endl;
    }


    return 0;
}