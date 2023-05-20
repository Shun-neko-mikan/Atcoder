#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;
    long long n;
    cin >> n;
    long long t = 0;
    long long s_max = 0;
    long long s_min = 0;
    for(int i = s.size()-1;i >=0; i--){
        if(s[i] == '?'){
            s_max += pow(2,s.size()-i-1) * 1;
            s_min += pow(2,s.size()-i-1) * 0;
        
            continue;
        }
        s_max+= pow(2,s.size()-i-1) * (s[i]-'0');
        s_min+= pow(2,s.size()-i-1) * (s[i]-'0');
        
    }
    if(n < s_min){
        cout << -1 << endl;
        return 0;
    }

    if(n > s_max){
        cout << s_max << endl;
        return 0;
    }


    cout << s_max << endl;
    cout << s_min << endl;
}