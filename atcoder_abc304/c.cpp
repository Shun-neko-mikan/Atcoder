#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,d;
    cin >> n >> d;
    vector <pair<int,int>> xy(n);
    bool flag = false;
    vector <int> infection;
    vector <bool> is_infected(n,false);
    for (int i = 0; i < n; i++){
        cin >> xy[i].first >> xy[i].second;
    }
    infection.push_back(0);
    is_infected[0] = true;
    int count = 0;
    while(count < 2000){
        flag = false;
        int infection_size = infection.size();
        while(infection.size() > 0){
            // cout << "f" << infection[0] << endl;
            for(int j = 1; j < n; j++){
                
                if(is_infected[j]){
                    continue;
                }
                if(pow(xy[infection[0]].first - xy[j].first,2) + pow(xy[infection[0]].second - xy[j].second,2) <= pow(d,2)){
                    is_infected[j] = true;
                    infection.push_back(j);
                    flag = true;
                }
            }
            // infectionからi番目の要素を削除
            infection.erase(infection.begin());
            // cout << "w" << infection[0] << endl;
        }
        
        
        if(!flag){
         break;
        }
        count++;
    }

    for(int i = 0; i < n; i++){
        if(is_infected[i]){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}