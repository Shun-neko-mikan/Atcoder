#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int ans = n % 5;
    if (ans == 0){
        cout << n << endl;
    } else if (ans == 1){
        cout << n-1 << endl;
    } else if (ans == 2){
        cout << n-2 << endl;
    } else if (ans == 3){
        cout << n+2 << endl;
    } else if (ans == 4){
        cout << n+1 << endl;
    }
}