/*
Method 1 (Simple but inefficient) 
Time Complexity: O(n^2)
Space Complexity: O(1)
*/
string equilibrium(int *arr, int n) {
        for(int i=0;i<n;i++){
            int leftSum=0;
            for(int j=0;j<i;j++){
                leftSum+=arr[j];
            }
            
            int rightSum=0;
            
            for(int j=i+1;j<n;j++){
               rightSum+=arr[j]; 
            }
    
            if(rightSum==leftSum)
                return "YES";
        }
        
        return "NO";
    }
	
/*
Method 2
Time Complexity: O(N)
Space Complexity: O(N)	
*/
string equilibrium(int *arr, int n) {
       int prefixSum[n];
       int sufixSum[n];
       
       prefixSum[0]=arr[0];
       
       for(int i=1;i<n;i++){
          prefixSum[i]=prefixSum[i-1]+arr[i]; 
       }
       
       sufixSum[n-1]=arr[n-1];
       
       for(int i=n-2;i>=0;i--){
         sufixSum[i]=sufixSum[i+1]+arr[i];  
       }
       
       for(int i=0;i<n;i++){
          if(prefixSum[i-1]==sufixSum[i+1])
            return "YES";
       }
       
       return "NO";
  }
  
/* Method 3 Efficient Solution
Time Complexity: O(N)
Space Complexity: O(1)	
*/
string equilibrium(int *arr, int n) {
     
       int lefSum=0;
       int rightSum=0;
       for(int i=0;i<n;i++){
           rightSum+=arr[i];
       }
       
       for(int i=0;i<n;i++){
          rightSum=rightSum-arr[i];
          
          if(lefSum==rightSum)
            return "YES";
          
          lefSum+=arr[i]; 
       }
       
       return "NO";
    }

/* Method 4 using Binary Search
   	
*/	
string equilibrium(int *arr, int n) {
        int mid = n / 2;
        int leftSum = 0, rightSum = 0;
 
        //calculation sum to left of mid
        for (int i = 0; i < mid; i++)
        {
            leftSum += arr[i];
        }
        
        //calculating sum to right of mid
        for (int i = n - 1; i > mid; i--)
        {
            rightSum += arr[i];
        }
 
        //if rightsum > leftsum
        if (rightSum > leftSum)
        {
            //we keep moving right until rightSum become equal or less than leftSum
            while (rightSum > leftSum && mid < n - 1)
            {
                rightSum -= arr[mid + 1];
                leftSum += arr[mid];
                mid++;
            }
       }
            else
            {
                //we keep moving right until leftSum become equal or less than RightSum
                while (leftSum > rightSum && mid > 0)
                {
                    rightSum += arr[mid];
                    leftSum -= arr[mid - 1];
                    mid--;
                }
            }
         
        
            if(leftSum==rightSum){
                return "YES";
            }else{
                return "NO";
            }
    }