#include <bits/stdc++.h>
using namespace std;

int main(void){
    int h,w;
    cin >> h >> w;
    vector <string> s(h);
    for (int i=0; i<h; i++){
        cin >> s[i];
    }
    pair <int,int> start;
    bool flag = false;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(s[i][j] == '#'){
                start = make_pair(i,j);
                flag = true;
                break;
            }
        }
        if(flag){
            break;
        }
    }

    // 角だった場合
    if(s[start.first][start.second-1] == '.' && s[start.first+1][start.second-1] == '#'){
        cout << start.first+1 << " " << start.second << endl;
        return 0;
    }


    // cout << start.first << " " << start.second << endl;
    for(int i = start.first; i<h; i++){
        for(int j = start.second; j<w; j++){
            // cout << i << " " << j << endl;
            if(s[i][j] == '#'){
                continue;
            }
            else{
                if(j+1 < w && i+1 < h){
                    if( s[i+1][j] == '#'){
                        cout << i+1 << " "<< j+1 << endl;
                        return 0;
                    }
                    if(i-1 >= 0 && s[i-1][j] == '#'){
                        cout << i+1 << " "<< j+1 << endl;
                        return 0;
                    }
                }
                else if(j+1 == w && i+1 < h){
                    if(s[i+1][j] == '#'){
                        cout << i+1 << " "<< j+1 << endl;
                        return 0;
                    }
                    if(i-1 >= 0 && s[i-1][j] == '#'){
                        cout << i+1 << " "<< j+1 << endl;
                        return 0;
                    }
                }
                else if(j+1 < w && i+1 == h){
                        cout << i+1 << " "<< j+1 << endl;
                        return 0;
                }
                else{
                    if(s[i][j-1] == '#' && s[i-1][j] == '#'){
                        cout << i+1 << " "<< j+1 << endl;
                        return 0;
                    }
                }

            }
        }

    }
}