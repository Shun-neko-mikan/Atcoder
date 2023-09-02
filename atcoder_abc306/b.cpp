#include <bits/stdc++.h>
using namespace std;

int main(void){
    unsigned long long ans = 0;
    for(int i = 0; i <= 63; i++){
        unsigned long long a;
        cin >> a;
        a = a << i;
        ans += a;
    }
    cout << ans << endl;
}