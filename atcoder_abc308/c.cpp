    #include <bits/stdc++.h>
    using namespace std;

    int main(void){
        int n;
        cin >> n;
        vector <long long> a(n);
        vector <long long> b(n);
        for(int i=0; i<n; i++){
            cin >> a[i] >> b[i];
        }
        vector <pair<long double, int>> ans;
        for(int i=0; i<n; i++){
            // cout << a[i] << " " << b[i] << endl;
            long long tmp1 = a[i] + b[i];
            long long gcd_tmp = __gcd(a[i], tmp1);
            tmp1 /= gcd_tmp;
            a[i] /= gcd_tmp;
            
            // cout << tmp1 << endl;
            double tmp2 = ((long double)a[i] / (double)tmp1);
            // cout << tmp2 << endl;
            ans.push_back(make_pair(tmp2, (-1)*(i+1)));
        }
        sort(ans.begin(), ans.end(), greater<pair<double, int>>());
        // 成功率が同じ場合、先に登録された方が先に出力される

        for(int i=0; i<n; i++){
        
            cout << -1 *ans[i].second << " ";
        }
    }