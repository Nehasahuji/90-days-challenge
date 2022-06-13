/* Naive Solution
   Linear Search
   Time Complexity O(n)
   Space Compleixty O(1)
*/
    int findFloor(vector<long long> v, long long n, long long x){
       int ans=-1; 
       for(long long i=0;i<n;i++){
           if(v[i]==x){
               return i;
           }else if(v[i]<x && v[i]>ans){
               ans=i;
           }
       }
       
    
    
       return ans;
        
    }
/* 
   Efficient Solution
   Binary Search
   Time Complexity O(logn)
   Space Compleixty O(1)
*/
	
	int findFloor(vector<long long> v, long long n, long long x){
       if(x<v[0])
            return -1;
            
        long long low=0,high=n-1;
        
        while(low<=high){
            
            int mid=(low+high)/2;
            
            if(v[mid]==x){
                return mid;
            }else if(v[mid]>x){
                 high=mid-1;
            }else{
                low=mid+1;
            }
        }
        
        return low-1;
    }