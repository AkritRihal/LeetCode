class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = 0;
        int index =1;        
        while(index<nums.size()){
            if(nums[index] == nums[prev]){
                index++;
            }
            else{
                prev++;
                nums[prev] = nums[index];
                index++;
            }
        }
        return prev+1;
    }
};