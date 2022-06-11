/* Search(first occurence) of an Element in an array 
   Linear Search
   Time Complexity O(n)
   Space Complexity O(1)
*/
  int search(int arr[], int N, int X)
    {
        
       for(int i=0;i<N;i++){
           if(arr[i]==X)
                return i;
       }
       
       return -1;
        
    }
