#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long n;
    long long tmp;
    cin >> n;
    if(n <= 999){
        cout << n << endl;
        return 0;
    }
    else if(n <= pow(10,4)-1){
        tmp = n % 10;
        
    }
    else if(n <= pow(10,5)-1){
        tmp = n % 100;
        
    }
    else if(n <= pow(10,6)-1){
        tmp = n %1000;
        
    }
    else if(n <= pow(10,7)-1){
        tmp = n %10000;
        
    }
    else if(n <= pow(10,8)-1){
        tmp = n % 100000;
        
    }
    else{
        tmp = n % 1000000;
    }
    n = n - tmp;
    cout << n << endl;
}