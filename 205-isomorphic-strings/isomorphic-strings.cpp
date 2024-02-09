class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0}; //mapping each char of s to that of t
        std::array<bool,256> isCharMapped  = {0};// stores if the char t[i] has been mapped already or not
        
        for(int i =0;i<s.size();i++){
            if(hash[s[i]]==0 && isCharMapped[t[i]] == 0){
                hash[s[i]]  = t[i];
                isCharMapped[t[i]] = true;
            }
        }
        for(int j =0; j<s.size();j++){
            if(hash[s[j]] != t[j]){
                return false;
            }
        }
        return true;
    }  
};