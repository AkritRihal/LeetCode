// class Solution {
// public:
//     int pivotIndex(vector<int>& nums){
//         int start = 0, end = nums.size()-1;
//         int n = nums.size(); 
//         int mid = start+(end-start)/2;
//         // in this we find the pivot index(greatest elemnt)
//         // for this first we check the cases where we are at the smallest elemnt or at the largest elemnt
//         while(end>=start){
//             if(end == start ) return end; //corner case when only oneelment is there in the vector
//             else if(mid+1<n && nums[mid]>nums[mid+1]) return mid;// check if at largest index
//             else if(mid-1>= 0 && nums[mid]<nums[mid-1]) return mid-1; // check if at smallest elemnt
//             // error posssible when the mid is at index 0 , there is no -1 index to compare to
//             else if(nums[mid]<nums[start]) end = mid-1; //check if at line B then go to left
//             else if(nums[mid]>nums[start]) start = mid+1; // check if at line A then go to right 
//             mid = start+(end-start)/2;
//         }  
//         return -1;
//     }
    
//     int binarySearch(vector<int>& nums,int start, int end, int target){
//         // code for binary search
//         int mid = start +(end -start)/2;
//         while(start<=end){
//             if(nums[mid]==target) return mid;
//             else if(nums[mid]>target) end = mid -1;
//             else if(nums[mid]<target) start = mid+1;
//             mid = start+ (end-start)/2;
//         }
//         return -1;
//     }

//     int search(vector<int>& nums, int target) {
//        int pivot  = pivotIndex(nums);
//        int answer;
//        if(target>=nums[0] && target<=nums[pivot]){
//            // if the targets is in line A check that
//            answer = binarySearch(nums,0,pivot,target);
//        }
//        else{    //if target less then then check B;
//            answer = binarySearch(nums,pivot+1,nums.size()-1,target);
//        }
//        return answer; 

//     }
// };


class Solution {
public:
    int search(vector<int>& nums, int t) {

          int ans=0,l=0,r=nums.size()-1,mid=0;
          int n=nums.size()-1;
    
    
        while(l<=r){
            mid=(l+r)/2;
            if(t==nums[mid]){return mid;}
             if(nums[mid]>nums[n]){
                 if(t>nums[mid]||t<nums[0]){
                     l=mid+1;
                 }else{
                     r=mid-1;
                 }
             }else{
                 if(t<nums[mid]||t>nums[n]){
                     r=mid-1;
                 }else{
                     l=mid+1;
                 }
             }
        }
        
        return -1;
    }
};



//solution with pivot index
//  class Solution {
// public:
//     int FindPivotIndex(vector<int>& nums) {
//         int left = 0, right = nums.size() - 1;
        
//         while (left < right) {
//             int mid = left + (right - left) / 2;
            
//             if (nums[mid] > nums[right]) {
//                 left = mid + 1;
//             } else {
//                 right = mid;
//             }
//         }
        
//         return left;
//     }
    
//     int binarySearch(vector<int>& nums, int target, int left, int right) {
//         while (left <= right) {
//             int mid = left + (right - left) / 2;
            
//             if (nums[mid] == target) {
//                 return mid;
//             } else if (nums[mid] < target) {
//                 left = mid + 1;
//             } else {
//                 right = mid - 1;
//             }
//         }
        
//         return -1;
//     }
    
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         if (n == 0) return -1;
        
//         int pivotIndex = FindPivotIndex(nums);
        
//         if (pivotIndex == 0 || target < nums[0]) {
//             return binarySearch(nums, target, pivotIndex, n - 1);
//         } else {
//             return binarySearch(nums, target, 0, pivotIndex - 1);
//         }
//     }
// };