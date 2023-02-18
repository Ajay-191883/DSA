#include<bits/stdc++.h>
using namespace std;

void missinRepeating(vector<int> nums){
    long long int n = nums.size();
    
    long long int sum = (n * (n+1))/2;
    long long int sqrSum = (n * (n+1) * ((2*n)+1))/6;

    long long int misssingNo=0, repeatedNo=0;

    for(int i = 0; i<n; i++){
        sum -= (long long int)nums[i];
        sqrSum -= (long long int)nums[i] * (long long int)nums[i];
    }

    misssingNo = ((sqrSum/sum)+ sum) / 2;
    repeatedNo = misssingNo - sum;


    cout<<misssingNo<<" "<<repeatedNo;
   
}

int main(){
    vector<int> nums = {2,1,1,3,4};
    missinRepeating(nums);
}