#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector <int> a;
    for(int i = 0;i < n; i++){
        int tmp;
        cin >> tmp;
        if( tmp % 2 == 0) a.push_back(tmp);
    }
    for(int i = 0;i < a.size(); i++){
        cout << a[i]<< ' ';
    }
    return 0;
}