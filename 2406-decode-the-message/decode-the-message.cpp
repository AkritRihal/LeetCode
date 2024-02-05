class Solution {
public:
    string decodeMessage(string key, string message) {
        //create mapping
        char start = 'a';
        char mapping[300] = {0};
        // random length given for o(1) and every elemnt assigned 0
        //for each loop
        for(auto ch:key){
            if(ch != ' ' && mapping[ch]==0){
                mapping[ch] = start;
                start++; //will increment the value a to b using ascii value
            } 
        }
        //use mapping
        string ans;
        for(auto messageCh:message){
            if(messageCh != ' '){
                char decodedCh = mapping[messageCh];
                ans.push_back(decodedCh);
            }
            else{
                ans.push_back(' ');
            }
        }
        return ans;
    }
};