class Solution {
public:
    bool isAnagram(string s, string t) {
     sort(s.begin(),s.end());
     sort(t.begin(),t.end());
     for(int i =0; i<s.length(); i++){
         if(s[i]!=t[i]) return false;
         else if(t.length()>s.length() || t.length()<s.length() ) return false;
     }
     return true;   
    }
};