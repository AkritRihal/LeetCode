class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //brute force
        int size = nums.size();

        for(int i =0; i<size;i++){
            int rsum =0;
            int lsum =0;
            for(int j =0; j<i; j++){
                lsum += nums[j]; 
            }

            for(int k = i+1; k<size; k++){
                rsum += nums[k];
            }

            if(lsum == rsum ){
                return i;
            }

            
        }
        return -1;
    }
};