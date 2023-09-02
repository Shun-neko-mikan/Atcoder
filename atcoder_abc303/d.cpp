// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main(void){
//     ll x,y,z;
//     cin >> x >> y >> z;
//     string s;
//     string t;
//     cin >> s;
//     s.push_back('E');
//     int num = 0;
//     for(int i = 0;i < s.size();i++){
//         if(i==0){
//             num++;
//         }
//         else{
//             if(s[i] == s[i-1]){
//                 num++;
//             }
//             else{
//                 t.push_back(s[i-1]);
//                 t.push_back(num+'0');
//                 num = 1;
//             }
//         }
//     }
//     // cout << t << endl;
//     bool cap = false;
//     int ans = 0;
//     for(int i = 0; i < t.size();i += 2){
//         if(cap){
//             if(t[i] == 'a'){
//                 if((y * (t[i+1]-'0')) >= x*(t[i+1]-'0') + z){
//                     ans += x*(t[i+1]-'0') + z;
//                     cap = false;
//                 }
//                 else{
//                     ans += y*(t[i+1]-'0');
//                 }
//             }
//             else{
//                 if((x * (t[i+1]-'0')) >= y*(t[i+1]-'0') + z){
//                     ans += y*(t[i+1]-'0') + z;
//                     cap = false;
//                 }
//                 else{
//                     ans += x*(t[i+1]-'0');
//                 }
//             }
            

//         }
//         else{
//             if(t[i] == 'a'){
//                 if(x*(t[i+1]-'0') >= y*(t[i+1]-'0') + z){
//                     ans += y*(t[i+1]-'0') + z;
//                     cap = true;
//                 }
//                 else{
//                     ans += x*(t[i+1]-'0');
//                 }
//             }
//             else{
//                 if(y*(t[i+1]-'0') >= x*(t[i+1]-'0') + z){
//                     ans += x*(t[i+1]-'0') + z;
//                     cap = true;
//                 }
//                 else{
//                     ans += y*(t[i+1]-'0');
//                 }
//             }
//         }
//         // cout << ans << endl;
//     }
//     cout << ans << endl;
// }

#include <bits/stdc++.h>
using namespace std;

constexpr long long INF = 1000000000000000000;

int main() {
    
	long long X,Y,Z;
	cin>>X>>Y>>Z;
	
	string S;
	cin>>S;
	
	vector dp(S.size()+1,vector<long long>(2,INF));
	dp[0][0] = 0;
	
	for(int i=0;i<S.size();i++){
		int cur;
		if(S[i]=='a')cur = 0;
		else cur = 1;
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				long long v = dp[i][j];
				if(j!=k)v += Z;
				if(cur==k)v += X;
				else v += Y;
				dp[i+1][k] = min(dp[i+1][k],v);
			}
		}		
	}
	
	cout<<min(dp[S.size()][0],dp[S.size()][1])<<endl;
	
	return 0;
}