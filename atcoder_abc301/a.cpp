#include <bits/stdc++.h>
using namespace std;
// https://atcoder.jp/contests/abc301/
int main(void){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int takahashi = 0;
    int aoki = 0;
    int ans = 0;
    for(int i = 0;i < n; i++){
        if(s[i] == 'T'){
            takahashi++;
        }
        else{
            aoki++;
        }
        if(takahashi < aoki){
            ans = 1;
        }
        else if(takahashi > aoki){
            ans = 2;
        }
    }
    if(takahashi > aoki){
        cout << "T" << endl;
    }
    else if(takahashi < aoki){
        cout << "A" << endl;
    }
    else{
        if(ans == 1){
            cout << "A" << endl;
        }
        else{
            cout << "T" << endl;
        }
    }
    return 0;
}