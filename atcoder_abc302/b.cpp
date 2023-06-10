#include <bits/stdc++.h>
using namespace std;

int main(void){
    int h,w;
    cin >> h >> w;
    int ans = 0;
    int anspos = -1;
    bool flag = false;
    bool sei = true;
    vector<string> s(h);
    vector<string> t(w);
    vector <pair <int, int> > snuke(5);
    for(int i = 0; i < h; i++){
        cin >> s[i];
    }
    for(int i = 0;i < w; i++){
        for(int j = 0;j < h; j++){
            t[i] += s[i][j];
        }
    }






    for(int i = 0;i < h; i++){
        anspos = s[i].find("snuke");
        if(anspos != -1){
            ans = i+1;
            anspos++;
            flag = true;
            break;
        }
        anspos = s[i].find("ekuns");
        if(anspos != -1){
            ans = i+1;
            anspos++;
            flag = true;
            sei = false;
            break;
        }
    }
    if(flag){
        if(sei){
            for(int i = 0;i < 5; i++){
                cout << ans << " " << anspos+i << endl;
            }   
            return 0;
        }   
        else{
            for(int i = 5;i >= 0; i--){
                cout << ans << " " << anspos-i << endl;
            }return 0;
        }  
    }  

    for (int i = 0; i < w;i++){
        anspos = t[i].find("snuke");
        if(anspos != -1){
            ans = i+1;
            anspos++;
            flag = true;
            break;
        }
        anspos = t[i].find("ekuns");
        if(anspos != -1){
            ans = i+1;
            anspos++;
            flag = true;
            sei = false;
            break;
        }
    }
    if(flag){
        if(sei){
            for(int i = 0;i < 5; i++){
                cout << anspos+i << " " << ans << endl;
            }   
            return 0;
        }   
        else{
            for(int i = 5;i >= 0; i--){
                cout << anspos-i << " " << ans << endl;
            }return 0;
        }  
    }
    


}