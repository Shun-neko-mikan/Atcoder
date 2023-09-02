#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void){
    int  n;
    cin >> n;
    vector <vector <int> > ans(101, vector <int> (101, 0));
    vector <int> a(n), b(n), c(n), d(n);
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    for(int i=0;i<n;i++){
        for(int j=a[i]+1;j<=b[i];j++){
            for(int k=c[i]+1;k<=d[i];k++){
                ans[j][k]=1;
            }
        }
    }
    int cnt = 0;
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            if(ans[i][j] == 1)cnt++;
            // cout << ans[i][j] << " ";
        }
        // cout << endl;
    }

    cout << cnt << endl;
}