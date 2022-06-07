/* Pair with given sum in a sorted array 
TC = O(n*2O
SC =O(1) */
int Countpair(int arr[], int n, int sum){
        
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==sum){
                    count++;
                }
            }
        }
      
     if(count==0){
         return -1;
     }
     return  
        count;
    }
