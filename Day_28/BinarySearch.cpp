 //Time Compexity O(log(n))
	//here n is size of array
 
 int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        
        while(left<=right){
            int mid=(left+right)/2;
            
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                right=mid-1;
            else
                left=mid+1;
        }
        
        return -1;
    }