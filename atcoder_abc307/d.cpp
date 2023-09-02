#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = false;
    stack <int> st;
    stack <int> en;
    int i = 0;
    for(i=0; i<s.size(); i++){
        if(s[i] == '('){
            st.push(i);
        }
        if(s[i] == ')'){
            if(st.empty()){
                continue;
            }
            else{
                // 文字列sのst.top()からiまでを消す
                s.erase(st.top(), i - st.top() + 1);
                i = st.top() - 1;
                st.pop();
            }
        }
    }
    cout << s << endl;
}