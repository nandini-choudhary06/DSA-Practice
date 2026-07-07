class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if(matrix.empty() || matrix[0].empty()){
            return result;
        }
        int srow = 0, scol = 0;
        int erow = matrix.size()-1, ecol = matrix[0].size()-1;
        while(srow<=erow && scol<=ecol){
            for(int j=scol; j<=ecol; j++){
                result.push_back(matrix[srow][j]);
            }
            srow++;
            for(int i=srow; i<=erow; i++){
                result.push_back(matrix[i][ecol]);
            }
            ecol--;
            if(srow<=erow){
                for(int j=ecol; j>=scol;j--){
                    result.push_back(matrix[erow][j]);
                }
                erow--;
            }
            if(scol<=ecol){
                for(int i=erow; i>=srow; i--){
                    result.push_back(matrix[i][scol]);
                }
                scol++;

            }
        }
        return result;
    }
};