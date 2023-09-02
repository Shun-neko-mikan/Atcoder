#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// 売り手 >= 買手
int main(void){
    int n,m;
    vector <ll> a;
    vector <ll> b;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        ll temp;
        cin >> temp;
        a.push_back(temp);
    }
    for(int i=0;i<m;i++){
        ll temp;
        cin >> temp;
        b.push_back(temp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector <pair <ll, int>> ab;
    for(int i=0;i<n;i++){
        ab.push_back(make_pair(a[i], 0));
    }
    for(int i=0;i<m;i++){
        ab.push_back(make_pair(b[i], 1));
    }
    sort(ab.begin(), ab.end());
    int a_count = 0;
    int b_count = m;
    bool flag;
    for(int i = 0;i < ab.size();i++){
        // cout << ab[i].first << " " << ab[i].second << endl;
        if(ab[i].second == 0){
            a_count++;
            flag= false;
        }
        else{
            b_count--;
            flag = true;
        }
        if(a_count >= b_count){
            if(flag) cout << ab[i].first+1 << endl;
            else cout << ab[i].first << endl;
            return 0;
        }
    }

}