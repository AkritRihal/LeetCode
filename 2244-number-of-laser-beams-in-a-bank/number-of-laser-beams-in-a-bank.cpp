class Solution {
public:

    //func to calc no of opnes
    int ones(string& s){
        int count =0;
        for(auto b : s){
            count += b-'0';          
        }
        return count;
    }

    int numberOfBeams(vector<string>& bank) {
        // count the no of ones in each row and update the answer;
        int ans = 0, prev = 0,next = 0;

        for(auto row : bank){
            next = ones(row);
            if(next !=0){
                ans += prev*next;
                prev = next;
            }
        }
        return ans;
    }
};