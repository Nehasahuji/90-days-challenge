  //Time Complexity O(nlogn)
  //O(1)  
  int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
 
 //Effiecient solution using Lomuto partition by finding kth smallest and convert it to the largetst by comaring it with the 
 nums.size()-k-1 element
 int lomutoPartition(vector<int>&nums,int low,int high){
        int pivot=nums[high];
        int i=low-1;
        for(int j=low;j<high;j++){
            if(nums[j]<pivot)
            {
                i++;
                swap(nums[j],nums[i]);
            }
                
        }
        
        swap(nums[i+1],nums[high]);
        return i+1;
    }
    
	
    int findKthLargest(vector<int>& nums, int k) {
       int low=0,high=nums.size()-1;
        int kthLargest=nums.size()-k;
        while(low<=high){
            int pivot=lomutoPartition(nums,low,high);
            
            if(pivot<kthLargest)
                low=pivot+1;
            else if(pivot>kthLargest)
                high=pivot-1;
            else 
                return nums[pivot];
        }
        
        return -1;
    }
	
//Effiecient solution using Lomuto partition by finding the k-1th largest	
int lomutoPartition(vector<int>&nums,int low,int high){
        int pivot=nums[low];
        int i=high+1;
        for(int j=high;j>low;j--){
            if(nums[j]<pivot)
            {
                i--;
                swap(nums[j],nums[i]);
            }
                
        }
        
        swap(nums[i-1],nums[low]);
        return i-1;
    }
    
    int findKthLargest(vector<int>& nums, int k) {
       int low=0,high=nums.size()-1;
        while(low<=high){
            int pivot=lomutoPartition(nums,low,high);
            
            if(pivot<k-1)
                low=pivot+1;
            else if(pivot>k-1)
                high=pivot-1;
            else 
                return nums[pivot];
        }
        
        return -1;
    }