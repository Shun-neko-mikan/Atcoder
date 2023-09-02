#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int flag = 0;
    if(s[0] == 'M'){

        for(int i = 1;i < n; i++){
            if(flag == 0){
                if(s[i] == 'F') flag = 1;
                else{
                    cout << "No" << endl;
                    return 0;
                }
            }
            else{
                if(s[i] == 'M') flag = 0;
                else{
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    else{
        for(int i = 1;i < n; i++){
            if(flag == 0){
                if(s[i] == 'M') flag = 1;
                else{
                    cout << "No" << endl;
                    return 0;
                }
            }
            else{
                if(s[i] == 'F') flag = 0;
                else{
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}