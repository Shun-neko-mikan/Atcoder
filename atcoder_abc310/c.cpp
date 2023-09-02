#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(void){
    int n;
    cin >> n;
    set <string> s;
    int ctn = 0;
    for(int i=0; i<n; i++){
        string tmp;
        cin >> tmp;
        
        // tmpが同じ文字だけで構成されているかどうかを判定
        bool flag = true;
        for(int j=1; j<tmp.size(); j++){
            if(tmp[0] != tmp[j]){
                flag = false;
                break;
            }
        }
        if(flag){
            tmp.append("1");
        }
        // 回文かどうかを判定
        if(!flag){
            for(int j=0; j<tmp.size()/2; j++){
                if(tmp[j] != tmp[tmp.size()-1-j]){
                    flag = false;
                    break;
                }
            }
        }
        s.insert(tmp);
        // 文字列を反転させる
        reverse(tmp.begin(), tmp.end());
        s.insert(tmp);
    }
    cout << (s.size()+ctn) / 2 << endl;    
}