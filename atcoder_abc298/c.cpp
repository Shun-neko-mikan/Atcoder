#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    int q;
    cin >> n >> q;
    vector<vector<int>> box(n+1);
    vector <set <int>> num(210000);
    vector <vector <int>> ans(n);
    for(int i = 0;i < q; i++){
        int que;
        int x,y;
        cin >> que;
        if(que == 1){
            cin >> x >> y;
            box[y].push_back(x);
            num[x].insert(y);
        }
        else if(que == 2){
            cin >> x;
            sort(box[x].begin(),box[x].end());
            for(int j = 0;j < box[x].size(); j++){
                cout << box[x][j] << " ";
            }
            cout << endl;
        }
        else{
            cin >> x;
            for(auto X : num[x]){
                cout << X << " ";
            }
            cout << endl;
        }
    }
    return 0;
}