class Solution {
public:

    // this function normalizes the words in similar format
    // all the strings will start from a and will proceed acc to the pattern
    void createMapping(string& str){
        // create mapping
        char start ='a';
        char mapping[300] = {0};
        // char map_words[300] = {0};

        for(auto ch:str){
            if(mapping[ch]==0){
                mapping[ch] = start;
                start++;
            }
        } 
        //update the string with new mapping
        for(int i =0; i<str.length();i++){
            str[i] = mapping[str[i]];
        }
    }

    //EX: for a string PRR its mapping will be ABB and that for HGIH will be ABCA

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> answer;
        //normalize the given pattern in same format
        createMapping(pattern);

        //now do the same for each string in the words
        for(string word:words){
            string tempString = word;
            createMapping(tempString);

            //compare the normalized form of the pattern with the string in the words
            if(tempString == pattern){
                answer.push_back(word);
            }
        }
        return answer;
    }
};