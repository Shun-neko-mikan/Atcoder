#include <bits/stdc++.h>
using namespace std;

int main(void){
    int Ha,Wa,Hb,Wb,Hx,Wx;
    cin >> Ha >> Wa;
    vector <string> a(Ha);
    for(int i=0; i<Ha; i++){
        cin >> a[i];
    }
    cin >> Hb >> Wb;
    vector <string> b(Hb);
    for(int i=0; i<Hb; i++){
        cin >> b[i];
    }
    cin >> Hx >> Wx;
    vector <string> x(Hx);
    vector <vector <char>> ans_a(Hx, vector<char>(Wx,'.'));
    for(int i=0; i<Hx; i++){
        cin >> x[i];
    }

    // 全探索をして、シートA､Bの重ね合わせがXと一致するかどうかを調べる
    // 一致したら、Yesを出力
    // 一致しなかったら、Noを出力
    


    // }
    // bool flag = false;
    // map <pair<int,int>, bool> black_x_map;
    // vector <pair<int,int>> black_x;
    // for(int i=0; i<Hx; i++){
    //     for(int j=0; j<Wx; j++){
    //         if(x[i][j] == '#'){
    //             black_x_map[make_pair(i,j)] = false;
    //             black_x.push_back(make_pair(i,j)); //クロ点の座標を保存
    //         }
    //     }
    // }
    // vector <pair<int,int>> black_a;
    // for(int i=0; i<Ha; i++){
    //     for(int j=0; j<Wa; j++){
    //         if(a[i][j] == '#'){
    //             black_a.push_back(make_pair(i,j)); //クロ点の座標を保存
    //         }
    //     }
    // }
    // vector <pair<int,int>> black_b;
    // for(int i=0; i<Hb; i++){
    //     for(int j=0; j<Wb; j++){
    //         if(b[i][j] == '#'){
    //             black_b.push_back(make_pair(i,j)); //クロ点の座標を保存
    //         }
    //     }
    // }
    // flag = true;
    // int a_black_x_gap = black_x[0].first - black_a[0].first;
    // int a_black_y_gap = black_x[0].second - black_a[0].second;
    // for(int i=0; i<black_a.size(); i++){
    //     // mapのキーがあるかどうか
    //     if(black_x_map.count(make_pair(black_a[i].first + a_black_x_gap, black_a[i].second + a_black_y_gap)) == 0){
    //         flag = false;
    //         break;
    //     }
    //     else{
    //         black_x_map[make_pair(black_a[i].first + a_black_x_gap, black_a[i].second + a_black_y_gap)] = true;
    //     }
    // }
    // if(flag){

    // }





    // flag = true;
    // int b_black_x_gap = black_x[0].first - black_b[0].first;
    // int b_black_y_gap = black_x[0].second - black_b[0].second;
    // for(int i=0; i<black_b.size(); i++){
    //     // mapのキーがあるかどうか
    //     if(black_x_map.count(make_pair(black_b[i].first + b_black_x_gap, black_b[i].second + b_black_y_gap)) == 0){
    //         flag = false;
    //         break;
    //     }
    //     else{
    //         black_x_map[make_pair(black_b[i].first + b_black_x_gap, black_b[i].second + b_black_y_gap)] = true;
    //     }
    // }
    
}