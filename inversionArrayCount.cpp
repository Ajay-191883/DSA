#include<bits/stdc++.h>
using namespace std;


long long mergeLR(int arr[], int start, int mid, int end){
    int i = start;
    int j = mid;
    int k = 0;

    int temp[(end - start) + 1];

    long long count = 0;

    while(i < mid && j <= end){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
            count += (mid-i);
        }
    }

    while(i < mid){
        temp[k++] = arr[i++];
    }
    while(j <= end){
        temp[k++] = arr[j++];
    }

    for(int i= start, k = 0; i<= end; i++, k++){
        arr[i] = temp[k];
    }

    return count;

}

long long merge_sort(int arr[], int s, int e){
    long long count = 0;

    if(s < e){
        int m = (s + e)/2;

        long long lCount = merge_sort(arr, s, m);
        long long rCount = merge_sort(arr, m+1, e);

        long long mCount = mergeLR(arr,s, m+1, e);

        return mCount + lCount + rCount;
    }

    return count;
}

int main(){
    int arr[] = {1, 3, 5, 4, 2};
    int n = 5;

    int ans = merge_sort(arr, 0, n-1);

    cout<<ans;
    return 0;
}