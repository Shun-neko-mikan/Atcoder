#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    long long t;
    cin >> n >> t;
    vector<pair <long long, long long>> card(n);
    set <int> s;
    set <int> ones;
    long long tmp = 0;
    int ans = -1;
    for(int i = 0;i < n; i++){
        cin >> card[i].first;
        if(card[i].first == t){
            s.insert(i);
        }
        if(card[i].first == card[0].first){
            ones.insert(i);
        }
    }
    for(int i = 0;i < n; i++){
        cin >> card[i].second;
    }
    if(s.size() == 0){
        for(auto j = ones.begin(); j != ones.end(); j++){
            if(tmp < card[*j].second){
                tmp = card[*j].second;
                ans =*j + 1;
            }
        }
    }
    else{
        for(auto itr = s.begin(); itr != s.end(); itr++){
            if(tmp < card[*itr].second){
                tmp = card[*itr].second;
                ans = *itr+1;
            }
        }
    }
    cout << ans << endl;
}