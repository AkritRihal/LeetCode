class Solution {
public:

    static bool mycomp(string a, string b){
        string t1 = a+b;
        string t2 = b+a;
        // to check because in string sorting is done on bit comparison
        //eg : for a =30, b =3 t1 =303 and t2= 330 so this returns false 
        //so 3 comes before 30
        return t1>t2;
    }

    string largestNumber(vector<int>& nums) {
        //convert  the digits to  strings
        vector<string> str;
        for(auto i: nums){
            str.push_back(to_string(i));
        }

        //sort the string using a custom comparater
        sort(str.begin(),str.end(),mycomp);

        string answer = "";
        for(auto j:str){
            answer += j;
        }
        if(str[0]=="0") return "0";
        return answer;
    }
};