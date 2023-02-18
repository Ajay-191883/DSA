#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> arr){
    int i, j = -1;
    int size = arr.size();

    for(i =size-2; i>= 0; i--){
        if(arr[i] < arr[i+1]){
            break;
        }
    }

    if(i<0){
        reverse(arr.begin(), arr.end());
    }else{
        for(j = size-1; j> i; j--){
            if(arr[j] > arr[i]){
                break;
            }
        }

        swap(arr[i], arr[j]);
        reverse(arr.begin() + i + 1, arr.end());
    }


    cout<<"ind1: "<<i<<endl;
    cout<<"ind2: "<<j<<endl;

    return arr;
}

int main(){
    vector<int> arr = {1, 3, 5, 4, 2};
    vector<int> ans = nextPermutation(arr);

    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}