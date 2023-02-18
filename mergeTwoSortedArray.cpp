#include<bits/stdc++.h>
using namespace std;

void mergeArray(vector<int> nums1, vector<int> nums2){
    int n = nums1.size();
    int m = nums2.size();
    int gap = ceil((float)(n + m) / 2);
  while (gap > 0) {
    int i = 0;
    int j = gap;
    while (j < (n + m)) {
      if (j < n && nums1[i] > nums1[j]) {
        swap(nums1[i], nums1[j]);
      } else if (j >= n && i < n && nums1[i] > nums2[j - n]) {
        swap(nums1[i], nums2[j - n]);
      } else if (j >= n && i >= n && nums2[i - n] > nums2[j - n]) {
        swap(nums2[i - n], nums2[j - n]);
      }
      j++;
      i++;
    }
    if (gap == 1) {
      gap = 0;
    } else {
      gap = ceil((float) gap / 2);
    }
  }
    
    cout<<endl;
    for(int i = 0; i< m; i++){
        cout<<nums2[i]<<" ";
    }

    if(n > 0){

        for(int i = m; i < m+n  ; i++){
            nums1[i] = nums2[i-m];
        }
    }

    cout<<endl;
    for(int i = 0; i< n; i++){
        cout<<nums1[i]<<" ";
    }
    
}

int  main(){
    vector<int> num1 = {1,2,3,4,5};
    vector<int> num2 = {};
    mergeArray(num1, num2);
}