// Naive Solution
//Time Complexity O(n^2)
//Space Complexity O(n^2)
void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        vector<vector<int>> temp(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp[n-j-1][i]=matrix[i][j];
            }
        }
        
          for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=temp[i][j];
            }
        }
    }
// Efficient Solution
//Time Complexity O(n^2)
//Space Complexity O(1) 
 void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<n;i++){
            int low=0,high=n-1;
            while(low<high){
                int temp=matrix[low][i];
                matrix[low][i]=matrix[high][i];
                matrix[high][i]=temp;
                low++;
                high--;
            }
        }
    } 