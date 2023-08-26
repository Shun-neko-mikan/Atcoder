#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void){
    int n,m;
    cin >> n >> m;
    vector <string> s;
    for(int i=0;i<n;i++){
        string temp;
        cin >> temp;
        s.push_back(temp);
    }
    bool flag = true;
    for(int i=0;i<n-8;i++){
        for(int j=0;j<m-8;j++){
            flag = true;
            int l = 0;
            // 3*3のマスを見る
            for(int k=0;k<3;k++){
                
                for(l = 0; l < 3;l++){
                    if(s[i+k][j+l] == '.'){
                        flag = false;
                        break;
                    }
                }
                if(l == 3){
                    if(s[i+k][j+3]== '#'){
                        flag = false;
                        break;
                    }
                }
                if(!flag) break;
            }
            if(!flag) continue;
            // OKなラその下のマスが全て.かどうか
            int h = 0;
            for(h = 0; h < 4;h++){
                if(s[i+3][j+h] == '#') break;
            }
            if(h != 4) continue;
            // OKならば



            for(h = 0; h < 4;h++){
                if(s[i+5][j+5+h] == '#') break;
            }
            if(h != 4) continue;
            // OKならば
            for(h = 0; h < 3;h++){
                if(s[i+6+h][j+5] == '#') break;
            }
            if(h != 3) continue;
            for(int k=0;k<3;k++){
                
                for(l = 0; l < 3;l++){
                    if(s[i+6+k][j+6+l] == '.'){
                        flag = false;
                        break;
                    }
                }
            }
            if(flag){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }

}