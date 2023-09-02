#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void){
    int M;
    cin >> M;
    vector <int> D(M);
    for(int i = 0; i < M; i++) cin >> D[i];
    int ans = 0;
    for(int i = 0; i < M; i++){
        ans += D[i];
    }
    ans = (ans/2)+1;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < D[i]; j++){
            ans--;
            if(ans==0){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
}