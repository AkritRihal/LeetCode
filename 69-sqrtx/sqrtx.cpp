class Solution {
public:

    int mySqrt(int x) {
        int start = 0, end = x; 
        int answer;

        while(start<=end){
            long long int mid = start+(end-start)/2;

            if((mid*mid) == x){
                return mid;
            }
            else if((mid*mid) > x){
                end = mid-1;
            }
            else{
                answer = mid; // store the answer; if the sq of mid+1 > target then mid is the answer
                start = mid+1;
            }
        }
        return answer;
    }
};