#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s,t;
    string atcoder = "atcoder";
    cin >> s;
    cin >> t;
    vector <int> s_count(27,0);
    vector <int> t_count(27,0);
    int s_at = 0;
    int t_at = 0;
    // s,t共に"atcoder"以外の文字が等しい数あるか
    // @を用いて"atcoder"の文字を作れるか
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '@'){
            s_count[26]++;
        }
        else{
            s_count[s[i]-'a']++;
        }
        if(t[i] == '@'){
            t_count[26]++;
        }
        else{
            t_count[t[i]-'a']++;
        }

    }

    for(int i = 0;i < 26; i++){
        if(atcoder[0] == i+'a' || atcoder[1] == i+'a' || atcoder[2] == i+'a' || atcoder[3] == i+'a' || atcoder[4] == i+'a' || atcoder[5] == i+'a' || atcoder[6] == i+'a' || atcoder[7] == i+'a'){
            if(s_count[i] < t_count[i]){
                s_at += t_count[i] - s_count[i];
            }
            else if(s_count[i] > t_count[i]){
                t_at += s_count[i] - t_count[i];
            }
            
        }
        else {
            if(s_count[i] != t_count[i]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    if(s_at<= s_count[26] && t_at <= t_count[26]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}