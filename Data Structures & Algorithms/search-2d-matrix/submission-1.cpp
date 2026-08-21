class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix[0].size(), n = matrix.size();
        int start = 0, end = (m*n)-1, mid;

        while(start <= end){
            mid = (start+end)/2;
            int row = mid/m , col = mid % m;
            cout<<mid << " "<< row << " "<< col<<endl;
            if (matrix[row][col] > target){
                end = mid-1;
            }else if(matrix[row][col] < target){
                start = mid+1;
            }else{
                return true;
            }
        }

        return false;


    }
};
