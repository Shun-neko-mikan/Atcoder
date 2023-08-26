#include <bits/stdc++.h>
using namespace std;
#define ll long long int



typedef struct{
    int p;
    int c;
    vector <int> f;
}shop;

int main(void){
    int n,m;
    cin >> n >> m;
    vector <shop> s(n);
    for(int i=0; i<n; i++){
        cin >> s[i].p >> s[i].c;
        for(int j=0; j<s[i].c; j++){
            int tmp;
            cin >> tmp;
            s[i].f.push_back(tmp);
        }
    }
    sort(s.begin(), s.end(), [](shop a, shop b){return a.p < b.p;});
    int ans = 0;
    for(int i = 0; i < n;i++){
        for(int j = i+1;j < n;j++){
            bool flag = true;
            for(int k = 0;k < s[j].c;k++){
                if(find(s[i].f.begin(), s[i].f.end(), s[j].f[k]) == s[i].f.end()){
                    flag = false;
                    break;
                }
            }
            if(flag){
                if(s[i].p < s[j].p || s[i].c > s[j].c){
                    ans = 1;
                }
            }
        }
        if(ans != 0) break;
    }

    if(ans == 0){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }

}