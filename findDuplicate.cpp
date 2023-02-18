#include<bits/stdc++.h>
using namespace std;

int duplicate(int nums[]){
    int slow = nums[0];
    int fast = nums[0];

    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow != fast);

    fast = nums[0];

    while(slow != fast){
        fast = nums[fast];
        slow = nums[slow];
    }

    return slow;
}

int main(){
    int nums[] = {2,3,1,4,2};
    cout<<"duplicate is "<<duplicate(nums);
}