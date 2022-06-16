 /*
 Naive Solution
 Time Complexity O(n)
 */
 int searchInsert(vector<int>& nums, int target) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==target)
               return i;
           else if(nums[i]<target)
               ans=i+1;
       } 
        
        return ans;
    }
	
/*
 Efficient Solution using Binary search
Time Complexity O(logn)
*/		
int searchInsert(vector<int>& nums, int target) {
        int ans=0;
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=(left+right)/2;
            
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target){
                right=mid-1;
            }else{
                left=mid+1;
                ans=left;
            }
        }
        
        return ans;
    }