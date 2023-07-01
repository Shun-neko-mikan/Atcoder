#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector <int> a((7 * n)+1);
    for(int i=1; i<=7 * n; i++){
     
        cin >> a[i];
    }
    int sum = 0;
    for(int i = 0; i < n;i++){
        for(int j = 1; j <= 7; j++){
            sum += a[(7 * i) + j];
        }
        cout << sum << " ";
        sum = 0;
    }
}