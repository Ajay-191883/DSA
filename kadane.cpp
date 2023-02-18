#include<bits/stdc++.h>
using namespace std;

int sumOfLongestSubarray(vector<int> num){
    int sum = 0;
    int max = num[0];

    for(int i=0; i<num.size(); i++){
        sum += num[i];
        if(sum > max) max = sum;
        if(sum < 0) sum = 0;

    }

    return max;

}

int main(){
    vector<int> nums = {5,4,-1,7,8};
    cout<<sumOfLongestSubarray(nums);
}