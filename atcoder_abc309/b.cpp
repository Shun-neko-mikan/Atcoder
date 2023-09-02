#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector <string> s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    char tmp = s[0][0];
    char tmp2;
    s[0][0] = s[1][0];
    for(int i = 1;i < n;i++){
        tmp2 = s[0][i];
        s[0][i] = tmp;
        tmp = tmp2;
    }

    tmp2 = s[1][n-1];
    s[1][n-1] = tmp;
    tmp = tmp2;
    for(int i=2; i<n; i++){
        tmp2 = s[i][n-1];
        s[i][n-1] = tmp;
        tmp = tmp2;
    }

    tmp2 = s[n-1][n-2];
    s[n-1][n-2] = tmp;
    tmp = tmp2;
    for(int i = n-3;i >= 0;i--){
        tmp2 = s[n-1][i];
        s[n-1][i] = tmp;
        tmp = tmp2;
    }

    tmp2 = s[n-2][0];
    s[n-2][0] = tmp;
    tmp = tmp2;
    for(int i = n-3;i >= 1;i--){
        tmp2 = s[i][0];
        s[i][0] = tmp;
        tmp = tmp2;
    }

    for(int i=0; i<n; i++){
        cout << s[i] << endl;
    }

    return 0;
}