#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define for(i,n) for(int i = 0;i < n; i++)

int main(void){
    int n,p,q;
    cin >> n >> p >> q;
    vector <int> a(n);
    for(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    if(a[0] + q < p){
        cout << a[0] + q << endl;
    }
    else{
        cout << p << endl;
    }
}