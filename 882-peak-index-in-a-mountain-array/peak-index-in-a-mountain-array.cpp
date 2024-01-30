class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int n  = arr.size();
       int start  = 0;
       int end = n-1;
       int mid = start +(end - start)/2;
       while (start<=end){
           if(arr[mid]<arr[mid+1]){
               // a wali line mein hu 
               //right mein jana padega
               start = mid+1;  // +1 because peak cant be in left side because of the condition
           }
           else{
               // peak point pr hu ya b wali line pr hu
               // a wali line jana padega, left side
            //    equal to mid , so that we do not miss the mid 
               end = mid-1;
           }
           mid = start + (end-start)/2;
       } 
       return start;
    }
};