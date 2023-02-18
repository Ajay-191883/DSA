#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {2,0,1,1,2, 0,2,1};
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high){
        switch (nums[mid])
        {
        case 0:
            swap(nums[low++], nums[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(nums[mid], nums[high--]);
            break;
        
        default:
            break;
        }
    }

    for(int i = 0; i< n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}