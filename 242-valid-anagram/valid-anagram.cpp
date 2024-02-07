class Solution {
public:
    bool isAnagram(string s, string t) {
    //  sort(s.begin(),s.end());
    //  sort(t.begin(),t.end());
    //  for(int i =0; i<s.length(); i++){
    //      if(s[i]!=t[i]) return false;
    //      else if(t.length()>s.length() || t.length()<s.length() ) return false;
    //  } // for loop can be replaced with : (s==t) ? true:false
    //  return true;   
    // }


    //Approach : make a frequency table where we increment all the occurences of a char
    int Frequency[256]={0};
    for(int i =0; i<s.length(); i++){
        Frequency[s[i]]++;
    }

    //now we will decrement the occurences
    // then we check at last, if the values are 0 then return true else false;

    for(int j = 0; j<t.length(); j++){
        Frequency[t[j]]--;
    } 
    // here we check if all elemnts are 0
    for(int i =0; i<256;i++){
        if(Frequency[i]!=0) return false;
    }
    return true;
    }
};