class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());//sort the nums
        set<pair<int,int>> answer; // this is a set pair data structure , it stores elemnts in form of a pair i.e.: {1,4},{5,7} etc.
        int j =1,i=0;
        // int count = 0;
        while(j<nums.size()){
            int diff = nums[j]-nums[i];  // difference between two elemnets
            if(diff == k){
                answer.insert({nums[i],nums[j]});
                i++,j++;
            }
            else if(diff < k){  // we need to make sure that the differenc does not go more that or less than k if so , then we need to increment either one.
                j++;
            }
            else{
                i++;
            }
            if (i==j) j++;// will make sure that two same elements are not regarded as differnt, acc to question only unique ones must be added to solutin
        }
        return answer.size();
    }
};