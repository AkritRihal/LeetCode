class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //using binary search 
        // the middle elemnt will be the majority as per the given condition
        // firstly, sort it

        sort(nums.begin(),nums.end());
     
        int middle  = (nums.size()-1)/2;
        return nums[middle];
    }
};