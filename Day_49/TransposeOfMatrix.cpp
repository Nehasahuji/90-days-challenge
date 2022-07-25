// Naive Solution
//Time Complexity O(n^2)
//Space Complexity O(n^2) 
 void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here
        int temp[n][n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp[j][i]=matrix[i][j];
            }
        }
        
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=temp[i][j];;
            }
        }
    }
// Efficient Solution
//Time Complexity O(n^2)
//Space Complexity O(1) 	
	
	 void transpose(vector<vector<int> >& matrix, int n)
    { 
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[j][i],matrix[i][j]);
            }
        }
    }