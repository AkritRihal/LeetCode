class Solution {
public:

    string sumStr(string num1, int p1, string num2, int p2, int carry){

        //base case
        if(p1 < 0 && p2 < 0){
            if(carry != 0){
                return string(1, carry + '0');
            }
            return "";
        }

        //add
        string answer = "";
        //converting string to int and then adding and then calling recurssion func
        int n1 = ((p1 >= 0)? num1[p1]:'0') - '0';
        int n2 = ((p2 >= 0)? num2[p2]:'0') - '0';

        int sum = n1 +n2 + carry;
         
        int digit = sum % 10;
        answer.push_back(digit + '0'); // int to str
        carry = sum / 10;

        //recursion  

        answer += sumStr(num1, p1-1, num2, p2-1, carry);

        return answer;

    }

    string addStrings(string num1, string num2) {
        string ans  = sumStr(num1, num1.size()-1, num2, num2.size()-1, 0);
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};