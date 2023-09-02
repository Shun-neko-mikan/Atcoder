#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector <int> a;
    auto ans = 0;
    for(int i = 0;i < n; i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end());
    for(int i = 0;i < n; i++){
        if(a[i]==a[i+1]){
            ans++;
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}