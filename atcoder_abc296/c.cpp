#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,x;
    cin >> n >> x;
    vector <int> a(n);
    vector <int> ax(n);
    for(int i = 0;i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 0;i < n; i++){
        ax[i] = a[i]+x;
    }
    if(x == 0){
        cout << "Yes" << endl;
        return 0;
    }
    if(x>0){
        for(int i = 0;i < n; i++){
            bool present = find(begin(a),end(a), a[i]+x) != end(a);
            if(present){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}