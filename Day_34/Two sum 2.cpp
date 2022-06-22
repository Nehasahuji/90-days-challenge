/*
 Naive Solution
 Time Complexity O(n^2)
 Space Complexity O(1)
*/  
 vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
        
        for(int i=0;i<numbers.size();i++){
            for(int j=i+1;j<numbers.size();j++){
                if(numbers[i]+numbers[j]==target){
                    res.push_back(i+1);
                    res.push_back(j+1);
                    return res;
                }
            }
        }
        
        return res;
		
 }
 
 /*
 Optimised Solution
 Time Complexity O(n^2)
 Space Complexity O(1)
*/ 
 vector<int> twoSum(vector<int>& nums, int target) {
	
	vector<int> res;
        
        for(int i=0;i<numbers.size();i++){
            for(int j=i+1;j<numbers.size();j++){
                if(numbers[i]==target-numbers[j]){
                    res.push_back(i+1);
                    res.push_back(j+1);
                    return res;
                }
            }
        }
        
        return res;
		
 }
 /*
 Efficient Solution using hash map
Time Complexity O(n)
Space complexity O(n)
*/
  vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(m[target-nums[i]]+1);
                v.push_back(i+1);
                return v;
            }
            else
                m[nums[i]]=i;
        }
        return {}; // Target not found
    }
  /*
Efficient Solution using binary Search
Time Complexity O(nlogn)
*/
 
 vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
        for(int i=0;i<N-1;i++){
            int lo = i+1;
            int hi = N;
            while(lo<hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid]==target-nums[i]) return {i+1,mid+1}; // returning the indices
                else if(nums[mid]>=target-nums[i]) hi=mid;
                else lo = mid+1;
            }
            if(lo!=nums.size() && nums[lo]==target-nums[i]) return {i+1,lo+1};
        }
        return {}; // Target not found
    }
 /*
Efficient Solution using two pointer approch
Time Complexity O(n)
*/
vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> res;
        int left=0,right=nums.size()-1;
        while(left<=right){
            if(nums[left]+nums[right]==target){
                res.push_back(left+1);
                res.push_back(right+1);
                
                return res;
            }else if(nums[left]+nums[right]>target){
                right--;
            }else{
                left++;
            }
        }
        
        return res;
    }