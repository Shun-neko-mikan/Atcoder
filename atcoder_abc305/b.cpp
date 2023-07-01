#include <bits/stdc++.h>
using namespace std;

int main(void){
    char p,q;
    cin >> p >> q;
    map <char, int> m;
    m['A'] = 0;
    m['B'] = 3;
    m['C'] = 4;
    m['D'] = 8;
    m['E'] = 9;
    m['F'] = 14;
    m['G'] = 23;
    int ans = abs(m[p] - m[q]);
    cout << ans << endl;
}