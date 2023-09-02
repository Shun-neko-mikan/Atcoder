#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m,h,k;
    string s;
    cin >> n >> m >> h >> k;
    cin >> s;
    vector <int> x(m);
    vector <int> y(m);
    unordered_set<int> items;
    pair <int,int> takahashi;
    bool flag = true;
    for(int i = 0;i < m;i++){
        cin >> x[i] >> y[i];
        items.insert(x[i] * 200000 + y[i]);
    }
    for(int i = 0;i < n;i++){
        if(s[i] == 'R') takahashi.first++;
        else if(s[i] == 'L') takahashi.first--;
        else if(s[i] == 'U') takahashi.second++;
        else if(s[i] == 'D') takahashi.second--;
        h--;
        if(h < 0){
            flag = false;
            break;
        }
        if(h < k){
            // takahashi.first = xとtakehashi.second = yを探す
            if(items.find(takahashi.first * 200000 + takahashi.second) != items.end()){
                h = k;
                items.erase(takahashi.first * 200000 + takahashi.second);
            }
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}