#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void){
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int ans = a[0];
    for(int i=0;i<n;i++){
        if(ans == a[i]){
            ans++;
        }
        else{
            break;
        }
    }
    cout << ans << endl;
}