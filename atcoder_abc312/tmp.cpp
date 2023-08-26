#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void){
    int n,m;
    cin>>n>>m;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        a[i] = i+1;
    }
    vector <pair <int,int>> b(m);
    for(int i=0;i<m;i++){
        cin>>b[i].first>>b[i].second;
    }
    for(int i=0; i < m;i++){
        // もし、aの中にb[i].firstがあったら、aの中のb[i].firstをb[i].secondに変える
        for(int j=0;j<a.size();j++){
            if(a[j] == b[i].second){
                a.erase(a.begin()+j);
            }

        }
    }
    if(a.size() == 1){
        cout<<a[0]<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}