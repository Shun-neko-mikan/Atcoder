#include <bits/stdc++.h>
using namespace std;

int h,w;
vector <string> tateshift(vector <string> a);
vector <string> yokoshift(vector <string> a);

int main(void){
    cin >> h >> w;
    vector <string> a(h);
    vector <string> b(h);
    vector <int> at(w);
    vector <int> bt(w);
    vector <int> ay(h);
    vector <int> by(h);
    bool flag1 = false;
    bool flag2 = false;
    int xx = 0;
    int yy = 0;
    for(int i = 0;i < h; i++){
        cin >> a[i];
    }

    for(int i = 0;i < h; i++){
        cin >> b[i];
    }
    for(int i = 0;i < h; i++){
        for(int j = 0;j < w; j++){
            if(a[i][j] == '#'){
                at[j]++;
                ay[i]++;
            }
            if(b[i][j] == '#'){
                bt[j]++;
                by[i]++;
            }
        }
    }
    for(int i = 0;i < 35; i++){
        if(at == bt){
            xx = i;
            flag1 = true;
            break;
        }
        else{
            vector <int> tmp(w);
            for(int j = 0;j < w-1; j++){
                tmp[j] = at[j+1];
            }
            tmp[w-1] = at[0];
            at = tmp;
        }
    }
    for(int i = 0;i < 35; i++){
        if(ay == by){
            yy  = i;
            flag2 = true;
            break;
        }
        else{
            vector <int> tmp(h);
            for(int j = 0;j < h-1; j++){
                tmp[j] = ay[j+1];
            }
            tmp[h-1] = ay[0];
            ay = tmp;
        }
    }
    if(flag1 && flag2){
            cout << "Yes" << endl;
            return 0;
    }
    else{
        cout << "No" << endl;
        return 0;
    }
}

vector <string> tateshift(vector <string> a){
    vector <string> tmp(h);
    for(int i = 0;i < h-1; i++){
        for(int j = 0;j < w; j++){
            tmp[i].push_back(a[i+1][j]);
        }
    }
    for(int i = 0;i < w; i++){
        tmp[h-1].push_back(a[0][i]);
    }
    return tmp;
}

vector <string> yokoshift(vector <string> a){
    vector <string> tmp(h);
    for(int i = 0;i < w; i++){
        for(int j = 1;j < h; j++){
            tmp[i].push_back(a[i][j]);
        }
    }
    for(int i = 0;i < h; i++){
        tmp[i].push_back(a[i][0]);
    }
    return tmp;
}