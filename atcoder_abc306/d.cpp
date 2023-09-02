#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector <int > x(n);
    vector <long long> y(n);
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    // cout << endl;
    // おなかを壊しているときの最大値と壊していないときの最大値を保有する
    vector <vector <long long>> dp(n+1, vector <long long>(2, 0));
    dp[0][0] = 0;
    dp[0][1] = 0;
    if(x[0] == 0){
        dp[1][0] = max(dp[0][0], dp[0][0]+y[0]);
        dp[1][1] = max(dp[0][1], dp[0][1]+y[0]);
    }
    else{
        dp[1][0] = 0;
        dp[1][1] = max(dp[0][1], dp[0][1]+y[0]);
    }
    // cout << dp[1][0] << " " << dp[1][1] << endl;
    for(int i = 2; i <= n; i++){
        if(x[i-1] == 0){
            dp[i][0] = max(dp[i-1][0], max(dp[i-1][0],dp[i-1][1])+y[i-1]);
            dp[i][1] = dp[i-1][1];
        }
        else{
            dp[i][0] = dp[i-1][0];
            dp[i][1] = max(dp[i-1][1], dp[i-1][0]+y[i-1]);
        }
        // cout << dp[i][0] << " " << dp[i][1] << endl;
    }

    cout << max(dp[n][0], dp[n][1]) << endl;

}