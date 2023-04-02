#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector <string> s(8);
    string alp = "abcdefgh";
    int flag = 0;
    int tmpi = 0;
    int tmpj = 0;
    for(int i = 0;i < 8; i++){
        cin >> s[i];
    }
    for(int i = 0;i < 8; i++){
        for(int j = 0;j < 8; j++){
            if(s[i][j] == '*'){
                flag = 1;
                tmpi = i;
                tmpj = j;
                break;
            }
        }
        if(flag == 1) break;
    }
    cout << alp[tmpj] << 8-(tmpi) << endl;
    return 0;
}