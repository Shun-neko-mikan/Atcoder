#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void){
    string s;
    char c[5] = {'a', 'i', 'u', 'e', 'o'};
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'i' || s[i] == 'u' ||
           s[i] == 'e' || s[i] == 'o') continue;
        cout << s[i];
    }
    return 0;
}