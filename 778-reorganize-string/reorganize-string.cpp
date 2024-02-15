class Solution {
public:
    string reorganizeString(string s) {
        int hash[26]={0};
        for(int i =0;i<s.size();i++){
            hash[s[i]-'a'] ++;        //this ensures taht ais 0 and z is 25 in the hash
        }
        //find most frequent char
        char most_frequent_char;
        int most_frequency = INT_MIN;
        for(int i = 0; i<26; i++){
            if(hash[i]>most_frequency){
                most_frequency = hash[i];
                most_frequent_char = i + 'a';
            }
        }
        //placing the redundant chat in alternate places
        int index = 0;
        while(index < s.size() && most_frequency >0 ){
            s[index] = most_frequent_char;
            index += 2; 
            most_frequency --;         
        }

        if(most_frequency != 0) return "";

        hash[most_frequent_char - 'a'] = 0 ; 

        //placing other characters

        for(int i =0;i<26;i++){
            while(hash[i]>0){
                index = index >= s.size()? 1:index;
                s[index] = i + 'a';
                hash[i]--;
                index += 2;
            }
        }
        return s;   
    }
};