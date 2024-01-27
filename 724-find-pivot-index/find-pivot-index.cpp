class Solution {
public:

    int PrefixOptimisedApproach(vector<int>& nums){
        //make two vectors and store left and right sum at each index, 
        // now comapare and see if any sum is similar, then return index
        vector<int> leftSum(nums.size(),0);
        vector<int> rightSum(nums.size(),0);

        //left sum; start from elemnt at index 1
        for(int i =1;i<nums.size();i++){
            leftSum[i] = leftSum[i-1] + nums[i-1];
        }

        //rightSum
        // size-2 because we need to start from second last element
        for(int i =nums.size()-2;i>=0;i--){
            rightSum[i] = rightSum[i+1] + nums[i+1];
        }
        //check
        for(int k = 0; k<nums.size();k++){
            if(leftSum[k] == rightSum[k]){
                return k;
            }
        }
        return -1;
    }

    int pivotIndex(vector<int>& nums) {
        //brute force
        //take right sum and left sum at every position
        // int size = nums.size();

        // for(int i =0; i<size;i++){
        //     int rsum =0;
        //     int lsum =0;
        //     for(int j =0; j<i; j++){
        //         lsum += nums[j]; 
        //     }

        //     for(int k = i+1; k<size; k++){
        //         rsum += nums[k];
        //     }

        //     if(lsum == rsum ){
        //         return i;
        //     }

            
        // }
        // return -1;
        return PrefixOptimisedApproach(nums);
    }
};