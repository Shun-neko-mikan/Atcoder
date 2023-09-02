#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    for(int i = 2;i <= 9; i++){
        int s,s1;
        cout << "? " << i << "\n" << flush;
        cin >> s;
        cout << "? " << i+1 << "\n" << flush;
        cin >> s1;
        if(s != s1){
            cout << "! " << i << "\n" << flush;
            return 0;
        }
    }
    cout << "! " << n-1 << endl;
}