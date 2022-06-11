/*  Iterative Solution
    Time Complexity: O(log(n)
    Space Complexity: O(1)
 */
 int searchInSorted(int arr[], int N, int k) 
    { 
    
      int low=0, high=N-1;
      
      while(low<=high){
      
          int mid=(low+high)/2;
          
          if(arr[mid]==k)
              return 1;
          else if(arr[mid]>k)
              high=mid-1;
          else
              low=mid+1;
      }
       
      return -1;
    }

 /* Recursive Solution
    Time Complexity: O(log(n)
    Space Complexity: O(1)
 */	
	
  int binarySearch(int arr[],int low,int high,int k){
        int mid=(low+high)/2;
        
        if(high<low)
            return -1;
        
        if(arr[mid]==k)
            return 1;
        else if(arr[mid]>k)
            binarySearch(arr,low,mid-1,k);
        else
            binarySearch(arr,mid+1,high,k);
    }
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       return binarySearch(arr,0,N-1,K);
       
    }