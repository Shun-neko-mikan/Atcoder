#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void){
    int h,w;
    cin >> h >> w;
    vector <string> s(h);
    vector <set <char>> s_line(h);
    vector <set <char>> s_row(w);
    for(int i = 0; i < h; i++) cin >> s[i];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            s_line[i].insert(s[i][j]);
            s_row[j].insert(s[i][j]);
        }
    }

    for(int i = 0; i < h; i++){
        if(s_line[i].size() == 1){
            // s[i]をすべて'.'にする
            for(int j = 0; j < w; j++){
                s[i][j] = '.';
            }
        }
    }
    for(int i = 0; i < w; i++){
        if(s_row[i].size() == 1){
            // s[i]をすべて'.'にする
            for(int j = 0; j < h; j++){
                s[j][i] = '.';
            }
        }
    }
}