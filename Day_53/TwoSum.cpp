 /* Naive Solution
 Time Complexity : O(n^2) here n is size of array
  Space Complexity :O(1)
  */
  vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target)
                {   res.push_back(i);
                    res.push_back(j);  
                }     
            }
        }
        
      return res;
    }
	
 /* Efficient Solution
  Time Complexity
  Space Complexity */
 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end())
            {
                res.push_back(mp[target-nums[i]]);
                res.push_back(i);
                return res;
            }else{
                mp[nums[i]]=i;
            }
        }
        
        return res;
    }
	
	