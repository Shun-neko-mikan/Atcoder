#include <iostream>
#include <string>
#include <vector>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::static_modint<998244353>;

int main() {
	string s;
	cin >> s;
	int n = s.size();
	vector<vector<mint>> dp(n + 1, vector<mint>(n + 1));
	dp[0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (s[i] != ')') dp[i + 1][j + 1] += dp[i][j];
			if (j != 0 && s[i] != '(') dp[i + 1][j - 1] += dp[i][j];
		}
	}
	cout << dp[n][0].val() << '\n';
}
