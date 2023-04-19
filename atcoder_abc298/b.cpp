#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    bool flag = false;
    bool ans = true;
    vector <vector <int>> a(n, vector <int>(n));
    vector <vector <int>> b(n, vector <int>(n));
    for(int i = 0;i < n; i++){
        for(int j = 0;j < n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0;i < n; i++){
        for(int j = 0;j < n; j++){
            cin >> b[i][j];
        }
    }
    

     for(int i = 0;i < n; i++){
            for(int j = 0;j < n; j++){
                if(a[i][j] == 1){
                    if(b[i][j] != 1){
                        ans = false;
                    }
                }
            }
        }
        if(ans) {
            flag = true;
        }



    vector <vector <int>> tmp(n, vector <int>(n));
    for(int m = 0;m < 3; m++){
        ans = true;
        tmp = a;
        // cout << endl;
        // cout << endl;
        // cout << &a[0][0] << endl;
        // cout << &tmp[0][0] << endl;
        // cout << endl;
        // cout << endl;
        for(int i = 0;i < n; i++){
            for(int j = 0;j < n; j++){
                a[i][j] = tmp[n-1-j][i];
            }
        }
        for(int i = 0;i < n; i++){
            for(int j = 0;j < n; j++){
                if(a[i][j] == 1){
                    if(b[i][j] != 1){
                        ans = false;
                    }
                }
            }
        }
        if(ans) {
            flag = true;
            break;
        }
        // for(int i = 0;i < n; i++){
        //     for(int j = 0;j < n; j++){
        //         cout << a[i][j];
        //     }   
        //     cout << endl;
        // }
    }
    
    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }


    return 0;
}