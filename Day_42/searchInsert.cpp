 //Time Complexity : log(n)
 //Space Complexity :O(1)
 int searchInsert(vector<int>& nums, int target) {
       int left=0,right=nums.size()-1;
       int res;
        
        while(left<=right){
            int mid=(left+right)/2;
            
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
            {
                right=mid-1;
               
            }else
                left=mid+1;
                res=left;
        }
        
 
            return res;
      
    }