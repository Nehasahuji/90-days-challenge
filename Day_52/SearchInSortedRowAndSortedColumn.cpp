   //Naive Solution
 //Time Complexity O(R*C) here R=no of rows and C=no of columns
 //Space Complexity O(1)
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==target)
                    return true;
            }
        }
        
        return false;
    }
  
 //Efficient Solution
 //Time Complexity O(log(R+C)) here R=no of rows and C=no of columns
 //Space Complexity O(1)	
	
  bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i=0;
        int j=m-1;
        
        while(i<n && j>=0){
            if(matrix[i][j]==x)
                return true;
            else if(matrix[i][j]>x)
                j--;
            else
                i++;
        }
        return false;
    }