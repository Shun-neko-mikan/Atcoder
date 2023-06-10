#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long a,b;
    cin >> a >> b;
    long long ans;
    ans = a/ b;
    if(a % b != 0){
        ans++;
    }
    cout << ans << endl;
}