/*  Method 1:
    Using Linear Solution
    Time Complexity: O(n^1/2)
    Space Complexity: O(1)
 */
  long long int floorSqrt(long long int x) 
    {
        long long int res=0;
        for(int i=0;i*i<=x;i++){
            res=i;
        }  
        
        return res;
    }

/*  Method 2:
    Using Binary Search
    Time Complexity: O(log(n))
    Space Complexity: O(1)
*/	
long long int floorSqrt(long long int x) 
    {
        long long int low=0,high=x,res=-1;

        while(low<=high){
            long long int mid=(low+high)/2;
            long long int square=mid*mid;
            
            if(square==x)
            {
              return mid;
            }else if(square>x)
            {
                  high=mid-1;
            }else{
                low=mid+1;
                res=mid;
                
            }
            
        }
        
        return res;
    }
	