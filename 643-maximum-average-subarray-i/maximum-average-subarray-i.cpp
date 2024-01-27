class Solution {
public:

    double bruteForce(vector<int>& nums, int& k){
        int maxSum = INT_MIN;
        int i =0;
        int j =k-1; //i points to the begining of the subarray and j to the end
        while(j<nums.size()){
            int sum =0;
            for(int k =i;k<=j;k++){
                sum += nums[k];
            }
            maxSum = max(maxSum,sum);
            i++;j++;
        }
        double answer = maxSum/(double)k; 
        return answer;
    }

    double slidingWindow(vector<int>& nums, int& k){
        int sum = 0;
        int i =0;
        int j =k-1;
        for(int y =i;y<=j;y++)
            sum+=nums[y];
        int maxSum = sum;
        j++;//this will prevent condition when the size of window is equal to k, this will make it out of bound.
        while(j<nums.size()){
            sum-=nums[i++];//here we first use i and j and then increment for nrxt loop
            sum+=nums[j++];
            maxSum = max(maxSum,sum);
        }
        double answer = maxSum/ (double)k;
        return answer;
    }

    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums,k);
    }
};