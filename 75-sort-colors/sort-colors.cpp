class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int size = nums.size();
        int index = 0;
        int left = 0;
        int right = size-1;

        while(index<=right){
            if(nums[index] == 0){
                swap(nums[index],nums[left]);
                index++;
                left++;
            }
            else if(nums[index] ==2){
                swap(nums[right],nums[index]);
                right--;
            }
            else{
                index++;
            }
        }
    }
};