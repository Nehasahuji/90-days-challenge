// Method 1: Linear Search
 bool search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                return true;
        }
        
        return false;
    }
	
 //Method 2: Binary Search
  bool search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(target == nums[mid]) return true;
            
            if(nums[mid] > nums[start]) {   //seach in the left half
                if(target < nums[mid] && target >= nums[start]) end = mid - 1;
                else start = mid + 1;
            } else if(nums[mid] < nums[start])   //seach in the right half
                if(target > nums[mid] && target <= nums[end]) start = mid + 1;
                else end = mid - 1;
            } else start++; //handle for duplicate element
        }
        
        return false;
    }