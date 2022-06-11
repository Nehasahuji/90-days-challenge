/*  Method 1:
    Using Linear Solution
    Time Complexity: O(n)
    Space Complexity: O(1)
 */
int countOnes(int arr[], int N)
    {
        
        int count=0;
        for(int i=0;i<N;i++)
            if(arr[i]==1)
                count++;
        
        return count;
    }
/*  Method 2:
    Using Binary Search
    Time Complexity: O(log(n)
    Space Complexity: O(1)
*/	
	
 int countOnes(int arr[], int N)
    {
        int low=0,high=N-1,res=0;
        while(low<=high){
            int mid=(low+high)/2;
            
            if(arr[mid]==1)
            {    
                res=mid+1;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        
        return res;
    }