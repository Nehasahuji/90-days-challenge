/* Naive Solution
   Linear Search
   Time Complexity O(n)
   Space Compleixty O(1)
*/
int minNumber(int arr[], int low, int high)
    {
        int minNumber=arr[low];
        for(int i=low+1;i<=high;i++){
            minNumber=min(minNumber,arr[i]);
        }
        
        return minNumber;
        
    }
/* 
   Efficient Solution
   Binary Search
   Time Complexity O(logn)
   Space Compleixty O(1)
*/	
int minNumber(int arr[], int low, int high)
    {
        if(arr[low]<arr[high]) return arr[low];
        while(low<high){
            int mid=(low+high)/2;
           
            while(low<high){
            int mid=(low+high)/2;
            
            if(arr[mid]>arr[high]){
                low=mid+1;
            }else{
            high=mid;
            }
        }
        }
        
        return arr[low];
  
    }