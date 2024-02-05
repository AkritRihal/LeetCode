class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        // need to find count of each 
        int countP=0,countM=0,countG=0;
        int lastIndexP=0,lastIndexG=0,lastIndexM=0; // for the last possible index for each truck to travel
        int travelP=0,travelM=0,travelG=0;  // cost of travel from the travel vector 
        
        // check for whta type of garbage each entry in garbage has
        //then increase the count rerspectively and update the last index for each type
        for(int i =0; i<garbage.size(); i++){
            string current = garbage[i];
            for(int j = 0;j<current.length(); j++){
                if(current[j]=='P'){
                    countP++; lastIndexP=i;
                }
                if(current[j]=='G'){
                    countG++; lastIndexG=i;
                }
                if(current[j]=='M'){
                    countM++; lastIndexM=i;
                }
            }
        }

        //now calculate the travel cost for each ttype of garbage based on the last index calculated
        for(int i =0; i<lastIndexP;i++){
            travelP += travel[i]; 
        }
        for(int i =0; i<lastIndexG;i++){
            travelG += travel[i]; 
        }
        for(int i =0; i<lastIndexM;i++){
            travelM += travel[i]; 
        }

        int totalCost = 0;
        totalCost  = travelP + travelG + travelM + countP + countM + countG;
        return totalCost ;

    }
};