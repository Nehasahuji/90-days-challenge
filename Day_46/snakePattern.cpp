 vector<int> snakePattern(vector<vector<int> > matrix)
    {   
         vector<int> res;
         
         for(int i=0;i<matrix.size();i++){
            if(i%2){
                for(int j=matrix[i].size()-1;j>=0;j--){
                    res.push_back(matrix[i][j]);
                }
            }else{
                for(int j=0;j<matrix[i].size();j++){
                    res.push_back(matrix[i][j]);
                }
            }
         }
         
         return res;
    }