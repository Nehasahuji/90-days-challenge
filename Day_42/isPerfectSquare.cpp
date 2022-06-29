//Time Complexity O(n)
//Space Complexity O(1) 
 bool isPerfectSquare(int num) {
      for(long long i=0;i*i<=num;i++)
      {
          if(i*i==num)
              return true;
      }
        return false;
    }
//Time Complexity O(nlogn)
//Space Complexity O(1)
	
	 bool isPerfectSquare(int num) {
      int left=0,right=num;
        while(left<=right){
            long long mid=(left+right)/2;
            long long square=mid*mid;
            
            if(square==num)
                return true;
            else if(square>num)
                right=mid-1;
            else
                left=mid+1;
        }
        
        return false;
    }