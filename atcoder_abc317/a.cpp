#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void){
    int n,h,x;
    cin >> n >> h >> x;
    vector <int> p(n);
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    int tmp = 9999999;
    int ans = -1;
    for(int i=0;i<n;i++){
        if(h+p[i]>=x){
            if(tmp>p[i]+h){
                tmp = p[i]+h;
                ans = i+1;
            }
        }
    }
    cout << ans << endl;
}