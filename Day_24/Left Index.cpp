/* Naive Solution
   Linear Search
   Time Complexity O(n)
   Space Compleixty O(1)
*/
int leftIndex(int N, int arr[], int X){
    
    for(int i=0;i<N;i++){
        if(arr[i]==X)
            return i;
    }
    
    return -1;
    
}

/* Naive Solution
   Binary Search
   Time Complexity O(logn)
   Space Compleixty O(1)
*/

int leftIndex(int N, int arr[], int X){
    
    int low=0,high=N-1;
    
    while(low<=high){
        int mid=(low+high)/2;
        
        if(arr[mid]>X){
            high=mid-1;
        }else if(arr[mid]<X){
            low=mid+1;
        }else{
            if(mid==0||arr[mid]!=arr[mid-1]){
                return mid;
            }else{
                high=mid-1;
            }
        }
        
    }
    
    return -1;
    
}