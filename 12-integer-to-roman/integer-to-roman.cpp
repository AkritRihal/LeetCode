class Solution {
public:
    string intToRoman(int num) {
        string romanNums[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

        string answer="";

        for(int i = 0; i < 13; i++){
            while(num>=values[i]){
                num -= values[i];
                answer += romanNums[i];
            }
        }
        return answer;
        
    }
};