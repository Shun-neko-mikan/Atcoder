#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void){
    int n;
    cin >> n;
    vector <pair <int, int>>fs(n);
    for(int i = 0; i < n; i++){
        cin >> fs[i].second >> fs[i].first;
    }
    sort(fs.begin(), fs.end(), greater<pair<int, int>>());
    // for(int i = 0; i < n; i++){
    //     cout << fs[i].second << " " << fs[i].first << endl;
    // }
    if(fs[0].second != fs[1].second){
        cout << fs[0].first + fs[1].first << endl;
    }else{
        int tmp = fs[0].first + (fs[1].first/2);
        int tmp2 = fs[0].first;
        int f_tmp  = fs[0].second;
        for(int i = 2; i < n; i++){
            if(fs[i].second != f_tmp){
                tmp2 += fs[i].first;
                break;
            }
        }
        tmp = max(tmp, tmp2);
        cout << tmp << endl;
    }
    // (max + max-1) of (max+ max-1/2) or (max+ kmax);
}