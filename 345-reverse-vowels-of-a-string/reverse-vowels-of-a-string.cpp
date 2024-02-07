class Solution {
public:

    bool isVowel(char ch){
        if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u') return true;
        else if(ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U') return true;
        else return false;
    }

    string reverseVowels(string s) {
        int start =0;
        int end = s.length()-1;
        while(start<end){
            if(!isVowel(s[start])) start++;
            else if(!isVowel(s[end])) end--;
            else{
                swap(s[end],s[start]);
                start++;
                end--;
            }
        }
        return s;        
    }
};