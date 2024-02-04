class Solution {
public:

    bool checkPalin(string s, int i, int j){
        //this function will check if the given substring is palindrome or not
        while(i<=j){
            if(s[i]==s[j]){
                j--;
                i++;
            }
            else
                return false;

        }
        return true;
    }

    bool validPalindrome(string s) {
        // to remove at most 1  ie 0 removal or 1 removal
        int i =0; int j = s.length()-1;

        while(i<=j){
            if(s[i]==s[j]){
                j--;
                i++;
                //check if the last and start elemnts are equal
            }
            else{
                // here s[i] != s[j] so check that you should remove i or j to make a string
                bool answer1 = checkPalin(s,i+1,j);
                bool answer2 = checkPalin(s,i,j-1);
                return answer1 || answer2;

            }
        }
        //coming out of while loop , it means the string is a palindrome without removal
        return true;
        
    }
};