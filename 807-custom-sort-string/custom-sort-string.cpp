class Solution {
public:
    static string str;
    //custom comparator
    static bool compare(char ch1, char ch2){
        // / this will return true, if postion of ch1 in str sting is less than the positin of  ch2 in str string
        //when true is returned then ch1 wioll be placed before ch2 in output string 
        return (str.find(ch1)<str.find(ch2));
    }

    string customSortString(string order, string s) {
        str= order; //to use this in the function created
        sort(s.begin(),s.end(),compare); //sorting is dependent on the compare func,  
        return s;
    }
};
string Solution::str;