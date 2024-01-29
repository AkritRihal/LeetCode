class Solution {
public:

    int xorr(vector<int>& nums){
        int answer = 0;
        for (int i = 0; i<nums.size();i++){
            answer ^=nums[i]; 
        }
        for(int i=0; i<=nums.size();i++){
            answer^=i;
        }
        return answer;
        //here we will xor all the elememnts and then xor them with the index nums  
    }

    int missingNumber(vector<int>& nums) {
       return xorr(nums) ;
    }

};