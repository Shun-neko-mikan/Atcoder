#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    string w;
    for(int i = 0;i < n; i++){
        cin >> w;
        if(w == "and" || w == "not" || w == "that" || w == "the" || w == "you"){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}