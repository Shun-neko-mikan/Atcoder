#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector <string> s(n);
    bool flag = false;
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                continue;
            }
            string tmp = s[i] + s[j];
            bool flag2 = true;
            for(int k=0; k<tmp.size()/2; k++){
                if(tmp[k] == tmp[tmp.size()-1-k]){

                }
                else{
                    flag2 = false;
                    break;
                }
            }
            // cout << tmp.size()/2 << endl;
            if(flag2){
                flag = true;
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}