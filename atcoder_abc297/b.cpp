#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;
    int flag = -1;
    for(int i = 0;i < s.size(); i++){
        if(s[i] == 'B' && flag == -1){
            flag = i+1;
        }
        else if(s[i] == 'B'){
            if((flag+i+1) % 2 == 0){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    flag = 0;
    for(int i = 0;i < s.size(); i++){
        if(s[i] == 'R'){
            flag++;
        }
        else if(s[i] == 'K'){
            if(flag != 1){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}