class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowNo = matrix.size();
        int colNo = matrix[0].size();
        int totalSize = rowNo*colNo;
        // here we want to convert 2d to 1d , so we found out the size of the matrix or the total number of elemnets present in the matrix.
        // this will help us in specifying the searching range(start and end)
        
        int s=0, e = totalSize-1, mid = s+(e-s)/2;
        // using binary sesarch : here we first converted2d to 1d and implemnted the normal binary search
        while(e>=s){

            // now because it is a 2d matrix we need to convert the mid back to the address corresponding to the elemnt in the matrix
            // hmara mid 1d ka h but matrix me mid check krne ke liye hume usse matrix[] se matrix[][] wali form me change krn apadega
            // for that we will use the formula; 
            //column_number = (element index in 1d) % number of columns
            //row_number = (element index in 1d) /  number of columns

            int row = mid / colNo;
            int column = mid % colNo;
            int currentElement  = matrix[row][column];

            if(currentElement == target) return true;
            else if(currentElement < target) s = mid +1;
            else e = mid-1;
            mid = s+(e-s)/2;
        }
        return false;
    }
};