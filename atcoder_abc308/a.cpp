#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector <int> v(8);
    for(int i=0; i<8; i++){
        cin >> v[i];
    }
    int tmp = v[0];
    for(int i=0; i<8; i++){
        if(v[i] < 100 || v[i] > 675){
            cout << "No" << endl;
            return 0;
        }
        if(v[i] % 25 != 0){
            cout << "No" << endl;
            return 0;
        }
        if(tmp > v[i]){
            cout << "No" << endl;
            return 0;
        }
        tmp = v[i];

    }
    cout << "Yes" << endl;
}