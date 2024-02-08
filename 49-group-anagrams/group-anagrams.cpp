class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string , vector<string> > sol;
        for(auto i : strs){
            string temp =i;
            sort(temp.begin(),temp.end());
            sol[temp].push_back(i);
       } 
       vector<vector<string>> answer;
       for(auto i= sol.begin();i!=sol.end();i++){
           answer.push_back(i->second);
       }

       return answer;
    }
};