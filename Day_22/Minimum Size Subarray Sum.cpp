/* Naive Solution(TLE)
   Time Complexity:O(n^2)
   Space Complexity:O(n)
*/
int minSubArrayLen(int target, vector<int>& nums){
    int minSize=INT_MAX;
	for(int i=0;i<nums.size();i++){
	  int sum=0;
	  for(int j=i;j<nums.size();j++){
		sum=sum+nums[j];
		if(sum>=target){
		   minSize=min(minSize,j-i+1);
		}
	  }
	}
   
   if(minSize==INT_MAX)
		return 0;
	else
		return minSize;
}

/* Efficient Solution using two pointer/Sliding window
		sThe Array is traversed only once to insert elements into the window. It will take O(N) time
		The Array is traversed again once to remove elements from the window. It will also take O(N) time.
		So the total time will be O(N) + O(N) = O(2*N), which is similar to O(N)
   Space Complexity:O(1)
*/
int minSubArrayLen(int target, vector<int>& nums) {
       int minSize=INT_MAX;
        
        int start=0,sum=0;
        for(int end=0;end<nums.size();end++){
           
            sum=sum+nums[end];
            
            if(sum>=target){
                while(sum>=target){
                    minSize=min(minSize,end-start+1);
                    sum=sum-nums[start];
                    start++;
                }
            }
            
        }
        if(minSize==INT_MAX)
            return 0;
        else
            return minSize;
 }