class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //using two pinter approach
        // here j will indicate the point where the target value can be 
        // int j = nums.size()-1;
        int size = nums.size();
        int count =0;
        for(int index = 0; index<size; index++){
            //  if(nums[j]==val){
            //      j--;
            //  }
            //  if(nums[index]==val){
            //      swap(nums[index],nums[j]);
            //  }
            // count = index;
            if(nums[index]!= val){
                nums[count] = nums[index];
                count+=1;
            }
        }
        return count;
    }
};