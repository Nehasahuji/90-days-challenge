/* Naive Solution
 Time Complexity O(n)*/
 int guessNumber(int n) {
      
     for(int i=0;i<n;i++){
         if(guess(i)==0)
             return i;
       
     }
        return n;  
    } int guessNumber(int n) {
      
     for(int i=0;i<n;i++){
         if(guess(i)==0)
             return i;
       
     }
        return n;  
    }
/* Efficient Solution
Time Complexity O(logn)
*/	
	
  int guessNumber(int n) {
    int low=1;
        int high=n;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            int res=guess(mid);
            if(res==0)
                return mid;
            else if(res<0)
                high=mid-1;
            else
                low=mid+1;
        }
        
        return -1;
    }
	  
	  
	