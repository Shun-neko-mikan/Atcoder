#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void){
    int n;
    cin >> n;
    vector <vector <ll>> d(n, vector <ll> (n, 0));
    for(int i = 0;i < n; i++){
        for(int j = 0;j < n; j++){
            cin >> d[i][j];
        }
    }
}