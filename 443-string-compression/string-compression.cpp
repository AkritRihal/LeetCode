class Solution {
public:
    int compress(vector<char>& chars) {
        int index =0;
        int prev =chars[0];
        int count =1;

        //two poiter approach where another pointer points to the inplace 

        for(int i =1; i<chars.size();i++){
            if(chars[i]== prev){
                count++;
                // next++;
            }
            else{
                chars[index++] = prev;
                if(count > 1){
                    int start = index;
                    while(count){
                        // this is done because for length more than 9 we need to print a 1 2 3 
                        chars[index++] = (count % 10) + '0';  //int to string
                        count /= 10 ;
                        reverse(chars.begin() + start , chars.begin() + index);
                    }
                }
                prev = chars[i];
                count = 1;
            }
        }
        chars[index++] = prev;
        if(count > 1){
            int start = index;
            while(count){
                chars[index++] = (count % 10) + '0';
                count /= 10 ;
            }
            reverse(chars.begin() + start , chars.begin() + index);
        }

        return index;        
    }
};