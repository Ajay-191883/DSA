#include<bits/stdc++.h>

using namespace std;

vector<vector <int>> rotateMatrix(vector <vector<int>> matr){
    for(int i=0; i< matr.size(); i++){
        for(int j=0; j< i; j++){
            swap(matr[i][j], matr[j][i]);
        }
    }

    for(int i =0; i< matr.size(); i++){
        reverse(matr[i].begin(), matr[i].end());
    }

    return matr;
}

int main(){
    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector < vector < int >> rotArr = rotateMatrix(arr);

    for(auto it1:rotArr){
        for(auto it2: it1){

            cout<<it2<<" ";
        }
        cout<<endl;
    }

}