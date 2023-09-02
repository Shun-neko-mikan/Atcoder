#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void){
    string S;
    cin >> S;
    vector <string> v;
    v.push_back("ACE");
    v.push_back("BDF");
    v.push_back("CEG");
    v.push_back("DFA");
    v.push_back("EGB");
    v.push_back("FAC");
    v.push_back("GBD");
    if(find(v.begin(), v.end(), S) != v.end()){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}