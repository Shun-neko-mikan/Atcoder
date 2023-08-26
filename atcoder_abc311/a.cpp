#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ansa = 0;
    int ansb = 0;
    int ansc = 0;
    rep(i, n){
        if(s[i] == 'A') ansa++;
        if(s[i] == 'B') ansb++;
        if(s[i] == 'C') ansc++;
        if(ansa >0 && ansb > 0 && ansc > 0){
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
}