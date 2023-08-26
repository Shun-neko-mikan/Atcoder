#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main(void){
    int n;
    cin >> n;
    vector <vector <int>> x(n+1);
    for(int i = 1; i < n+1; i++){
        int a;
        cin >> a;
        x[i].push_back(a);
    }
    vector <int> ans;
    int j = 1;
    for(int i = 1; i< n+1;i++){
        int tmp = x[j][0];
        ans.push_back(tmp);
        j = tmp;
    }
    // for(int i = 0; i < n; i++){
    //     cout << ans[i] << " ";
    // }
    // cout << endl;

    set <int> s;
    vector <int> ans2;
    j = 0;
    for(int i = 0; i < n; i++){
        int tmp_size = s.size();
        s.insert(ans[i]);
        ans2.push_back(ans[i]);
        // cout << ans[i] << endl;
        if(tmp_size == s.size()){
            j = ans[i];
            break;
        }
    }
    if(j == 0){
        for(int i = 0; i < n; i++){
            cout << ans2[i] << " ";
        }
    }

    for(int i = 0; i < n; i++){
        if(ans2[i] == j){
            cout << ans2.size()-i-1 << endl;
            for(int k = i; k < ans2.size() - 1; k++){
                if(k == ans2.size() - 2){
                    cout << ans2[k] << endl;
                    break;
                }
                cout << ans2[k] << " ";
            }
            return 0;
        }
    }

    


    return 0;  

}