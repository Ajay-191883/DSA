#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> pascalTriangle(int num){
    vector<vector<int>> arr(num);

    for (int i = 0; i < num; i++) {
            arr[i].resize(i + 1);
             arr[i][0] = arr[i][i] = 1;
             
            for(int j = 1; j < i ; j++){
                 
                 arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];;
             }
         }
        return arr;

}


int main(){
    int num = 5;
    vector<vector<int>> arr = pascalTriangle(num);
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
            }
        cout << "\n";
        }
    return 0;
}