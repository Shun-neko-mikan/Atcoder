#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;
    if(a+1 == b && (a!=3 && a != 6)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}