/* Naive Solution
   Linear Search
   Time Complexity O(n)
   Space Compleixty O(1)
*/

 int peakElement(int arr[], int n)
    {
       if(arr[0]>arr[1]){
       
           return 0;
       }
       
       for(int i=1;i<n;i++){
           if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
               return i;
           }
       }
       
       if(arr[n-1]>arr[n-2]){
           return n-1;
       }
       
       return 0;
    }

/* 
   Efficient Solution
   Binary Search
   Time Complexity O(logn)
   Space Compleixty O(1)
*/

int peakElement(int arr[], int n)
    {
       if(arr[0]>arr[1]){
       
           return 0;
       }
       
       for(int i=1;i<n;i++){
           if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
               return i;
           }
       }
       
       if(arr[n-1]>arr[n-2]){
           return n-1;
       }
       
       return 0;
    }