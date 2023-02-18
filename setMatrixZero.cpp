#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> setMatrixZero(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<int> dum1(rows, -1), dum2(cols, -1);

    for(int i =0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(matrix[i][j] == 0){
                dum1[i] = 0;
                dum2[j] = 0;
            }
        }
    }

    for(int i =0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(dum1[i] == 0 || dum2[j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main(){
    vector<vector<int>> matrix;
    matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    vector<vector<int>> arr = setMatrixZero(matrix);
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
            }
        cout << "\n";
        }
    return 0;
}