class Solution {
public:
    bool isPalindrome(string& a, int s,int e){
        while(s<e){
            if(a[s]==a[e]){
                s++;e--;
            }
            else return false;
        }
        return true;
    }
    //using acustom func to check palindrome
    string longestPalindrome(string s) {
        string ans = "";
        for(int i =0;i<s.length();i++){
            for(int j= i;j<s.length();j++ ){
                // these two loops will make sure we visit every possible char combination
                // b,ba,bab,baba,babad, then 
                if(isPalindrome(s,i,j)){
                    string t =s.substr(i,j-i+1);// check the substring as we have to return a substr(starting index,length )
                    (t.length()>ans.size()) ? ans=t:ans=ans;
                }
            }
        }
        return ans;
    }
};