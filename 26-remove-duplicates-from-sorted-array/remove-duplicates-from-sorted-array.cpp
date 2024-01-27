class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = 1;
        // both the pointers will start from the index 1, 
        // here prev points to the place where unique values must come.
        //this is kind of fast slow pointer
        //every time a unique element is found it is assigned to the prev index and prev in icremented 
        
        for(int index = 1;index<nums.size(); index++){
            if(nums[index] != nums[index-1]){
                nums[prev] = nums[index];
                prev++;
            }
        }


        return prev;
    }
};