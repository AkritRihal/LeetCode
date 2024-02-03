class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.find(part) != string::npos){    // find if the substring exists in the string
            // erase the substring from the string and then return it.
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};