#include <bits/stdc++.h>
using namespace std;


int main(void){
    int n;
    cin >> n;
    vector <pair <int, int>> a(3*n);
    for(int i = 0; i < 3*n; i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a.begin(), a.end());
    vector <pair <int, int>> ans(n);
    int j = 0;
    for(int i = 1; i < 3*n; i+=3){
        ans[j].first = a[i].second;
        ans[j].second = a[i].first;
        j++;
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i < n; i++){
        cout << ans[i].second << " ";
    }
    // cout << endl;
    // for(int i = 0; i < 3*n; i++){
    //     cout << a[i].first << " " << a[i].second << endl;
    // }

}