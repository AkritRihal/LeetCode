class Solution {
public:
    string removeDuplicates(string s) {
        int i =0;

        //you did it onyour own
        // check next if same then erase, then point index to previous element
        while(i<s.length()){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                if(i-1 >= 0){
                    i--;
                }
            }
            else{
                i++;
            }
        }
        return s;
        
    }
};