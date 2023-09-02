#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll h,w;
    int n;
    cin >> w >> h;
    cin >> n;
    vector <pair<ll,ll>> pq(n);
    for(int i = 0; i < n; i++){
        cin >> pq[i].first >> pq[i].second;
    }
    int A,B;
    cin >> A;
    vector <ll> a(A);
    for(int i = 0; i < A; i++){
        cin >> a[i];
    }
    cin >> B;
    vector <ll> b(B);
    for(int i = 0; i < B; i++){
        cin >> b[i];
    }


    
}