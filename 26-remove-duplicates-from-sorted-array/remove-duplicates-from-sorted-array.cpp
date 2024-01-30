class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = 0; // will point to the place where there mustr be unique num and before it everyone is unique
        int index =1;        
        while(index<nums.size()){
            if(nums[index] == nums[prev]){ // check if there is duplicate or not
                index++;
            }
            else{  // replace the prev place to a unique num
                prev++;
                nums[prev] = nums[index];
                index++;
            }
        }
        return prev+1;
    }
};