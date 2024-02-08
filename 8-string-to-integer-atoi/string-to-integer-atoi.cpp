class Solution {
public:
    int myAtoi(string s) {
        int nums =0,sign=1,i=0;
        // sign 1 means positive value
        while(s[i]==' ') i++;// checking whitespaces

        if(i<s.length() && (s[i]=='-' || s[i]=='+')) {
            sign = s[i]=='+'?1:-1;
            i++;
        }// checking sign
        while(i<s.length() && isdigit(s[i])){ //now we check the range so that the digit is not above the range of int
            if(nums>INT_MAX/10 || (nums==INT_MAX/10 && s[i]>'7')){
                return sign ==-1?INT_MIN:INT_MAX;
            } 
            nums = nums*10+(s[i]-'0'); //s[i]-'0' will result in integer ex: let s[i] = 1; so ascii of 1 = 49 and ascii 0 = 28 so 49-28 =1
            i++;
        }
        
        return nums*sign;        
    }
};