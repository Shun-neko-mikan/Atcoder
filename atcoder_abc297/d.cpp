#include <bits/stdc++.h>
using namespace std;

int main(void){
    unsigned long long A,B;
    cin >> A >> B;
    unsigned long long ans = 0;
    // cout << A << endl;
    while(A != B){
        unsigned long long tmp = 0;
        unsigned long long amari = -1;
        if(A > B){
            tmp = A / B;
            amari = A % B;
            A = amari;
        }
        else if(A < B){
            tmp = B / A;
            amari = B % A;
            B = amari;
        }
        else if(A == B) break;

        if(amari == 0){
            ans += tmp-1;
            break;
        }
        else{
            ans += tmp;
        }
    }
    cout << ans << endl;
    return 0;
}