#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector <string> s(n);
    vector <long long> a(n);
    for (int i = 0; i < n; i++){
        cin >> s[i] >> a[i];
    }
    long long minimamm = 1000000001;
    int minimamm_index = 0;
    for(int i = 0; i < n; i++){
        minimamm = min(minimamm, a[i]);
        if (minimamm == a[i]){
            minimamm_index = i;
        }
    }
    int i = 0;
    int j = minimamm_index;
    // cout << minimamm_index << endl;
    while (i < n){
        cout << s[j]<< endl;
        j = (j + 1) % n;
        i++;
    }
}