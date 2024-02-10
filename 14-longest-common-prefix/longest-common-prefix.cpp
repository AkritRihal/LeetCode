class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i =0;

        string answer = "";

        while(true){
            char current  = 0;
            for(auto str : strs){
                if(i>=str.size()){
                    current =0;
                    break;
                }

                //start comparison
                if(current ==0){
                    current = str[i];
                }
                else if(str[i]!=current){
                    current =0;
                    break;
                }
            }
            if(current == 0){
                break;
            }
            else{
                answer.push_back(current);
                i++;
            }
        }
        return answer;
    }
};