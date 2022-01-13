//
// Created by samin on 13/01/22.
//
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> mergeSortedArrays(vector<int>& nums1, vector<int>& nums2){
        vector<int> mergedArray;
        int nums1size = nums1.size();
        int nums2size = nums2.size();
        int i = 0, j = 0;
        while(i<nums1size & j<nums2size){
            if(nums1[i]<nums2[j]){
                mergedArray.push_back(nums1[i]);
                i++;
            }
            else{
                mergedArray.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1size) {
            mergedArray.push_back(nums1[i]);
            i++;
        }
        while(j<nums2size) {
            mergedArray.push_back(nums2[j]);
            j++;
        }
        return mergedArray;
    }
    double get_median(vector<int>& arr){
        double median;
        int arr_size = arr.size();
        if(arr_size%2==0){
            median = (arr[(arr_size / 2)-1] + arr[arr_size / 2]) / 2.0;
        } else{
            median = arr[arr_size / 2];
        }
        return median;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedArray = mergeSortedArrays(nums1, nums2);
        return get_median(mergedArray);
    }
};

/*
int main(){
    vector<int> nums1, nums2;
    int i = 0, n, m, x;
    cin>>n;
    while(i<n){
        cin>>x;
        nums1.push_back(x);
        i++;
    }
    i = 0;
    cin>>m;
    while(i<m){
        cin>>x;
        nums2.push_back(x);
        i++;
    }
    double soln = Solution().findMedianSortedArrays(nums1, nums2);
    cout<<soln<<endl;
}
*/