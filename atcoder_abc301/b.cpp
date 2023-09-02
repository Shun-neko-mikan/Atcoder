#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0;i < n; i++){
        cin >> a[i];
    }

    for(int i = 0;i < n-1; i++){
        int tmp = 0;
        cout << a[i] << " ";
        if(a[i]+1 == a[i+1] || a[i]-1 == a[i+1]){
            continue;
        }
        else{
            if(a[i] < a[i+1]){
                tmp = a[i]+1;
                while(tmp != a[i+1]){
                    cout << tmp << " ";
                    tmp++;
                }
            }
            else{
                tmp = a[i]-1;
                while(tmp != a[i+1]){
                    cout << tmp << " ";
                    tmp--;
                }
            }
        }
    }
    cout << a[n-1];
    return 0;
}