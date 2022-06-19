 //Time Complexity O(logn)
 int firstOccurence(vector<int>& nums, int target){
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                if(mid==0||nums[mid-1]!=nums[mid]){
                    return mid;
                }
                else{
                    end=mid-1;
                }
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        
        return -1;
    }
    
    
    int lastOccurence(vector<int>& nums, int target){
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                if(mid==nums.size()-1||nums[mid+1]!=nums[mid]){
                    return mid;
                }
                else{
                    start=mid+1;
                }
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        
        return -1;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int first=firstOccurence(nums,target);
        int last=lastOccurence(nums,target);
        
        result.push_back(first);
         result.push_back(last);
        
        return result;
    }