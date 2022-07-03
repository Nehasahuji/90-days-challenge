  vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        
        vector<int> res;
        int upperMatrixTriangleSum=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix.size();j++){
                upperMatrixTriangleSum+=matrix[i][j];
            }
        }
        
        int lowerMatrixTriangleSum=0;
        int TotalMatrixSum=0;
        for(int i=matrix.size()-1;i>=0;i--){
            for(int j=i;j>=0;j--){
                lowerMatrixTriangleSum+=matrix[i][j];
            }
        }
        
        res.push_back(upperMatrixTriangleSum);
        res.push_back(lowerMatrixTriangleSum);
        
        
        return res;
    }