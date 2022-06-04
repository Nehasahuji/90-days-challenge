 /*Max Subarray sum
 Naive Solution
 Find all subarray and sum and record maxsum
 Time Complexity O(n^3) where n is the length of nums.
 Space Complexity O(1)
 */ 
 int maxSubarraySum(vector<int>& nums){
        
        int maxSum=nums[0];
        int n=nums.size();
		
        for(int i=0;i<n;i++){
            int currSum=nums[i];
            for(int j=i;j<=n;j++){
                for(int k=i;k<j;k++){
                      currSum+=nums[k];
                }
               maxSum=max(maxSum,currSum); 
               currSum=0;
            }
          
        }
      return   maxSum;
    }
	
 /*Max Subarray sum
 Optimised Solution
 Find all subarray and sum and record maxsum
 Time Complexity O(n^2) where n is the length of nums.
 Space Complexity O(1)
 */ 
 int maxSubArray(vector<int>& nums) {
      int maxSum=INT_MIN;
      
        for(int i=0;i<nums.size();i++){
            int currSum=0;
            for(int j=i;j<nums.size();j++){
                currSum=currSum+nums[j];
                maxSum=max(maxSum,currSum);
            }
        }
        
        return maxSum;
    }

/*Max Subarray sum Efficient Solution
 Using Devide and Conqure algorithm
 Time complexity: O(Nlog N) where N is the length of nums.
 Space Complexity O(1)
*/ 
 
 
int maxSubArray(vector<int>& nums) {
	
	
	return findBestSubArray(nums,0,nums,size()-1);
	
}

int findBestSubArray(vector<int>& nums,int left,int right){
	//base case
	if(left>right){
		return INT_MIN;
	}
	
	int mid = (left+right)/2;
	
	int currSum=0;
	int bestLeftSum=0;
	int bestRightSum=0;
	
	//Iterate from middle to begining
	for(int i=mid-1;i>=left;i--){
		currSum=curr+nums[i];
		bestLeftSum=max(bestLeftSum,currSum)
		
	}
	//Reset current and iterate from middle to end
	currSum=0;
	
	for(int i=mid+1;i<=right;i++){
		currSum=curr+nums[i];
		bestRightSum=max(bestRightSum,currSum)
		
	}
	
	//The CombinedSum 
	int CombinedSum = nums[mid]+bestRightSum+bestLeftSum;
	
	// Find the best subarray possible from both halves.
	int leftHalf = findBestSubArray(nums,left,mid-1);
	
	
	int rightHalf = findBestSubArray(nums,mid+1,right);
	
	//The largest of the 3 is the answer for any given input array.
        
	return max(CombinedSum,max(leftHalf
	,rightHalf
	));
}


	
/*Max Subarray sum Efficient Solution
 Kadane's Algorithm
 Time Complexity O(n) where n is the length of nums.
 Space Complexity O(1)
*/ 
	
int  maxSubarraySum(vector<int>& nums){
	    int n=-nums.size();
		int  maxSum=nums[0];
        int currSum=nums[0];
        for(int i=1;i<n;i++){
        currSum=max(currSum+nums[i],nums[i]);
        maxSum=max(maxSum,currSum);
        }
      return   maxSum;
 }
 
 
