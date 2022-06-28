//Time Complexity O(nlogn)
//Space Complexity O(1)
int singleNumber(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size()-1;i=i+2){
          if(nums[i]!=nums[i+1])
              return nums[i];
      }
        
      return nums[nums.size()-1];
    }

//Time Complexity O(n)
//Space Complexity O(n)
	
int singleNumber(vector<int>& nums) {
    map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
        
    map<int, int>::iterator itr;
        
    for(itr=mp.begin();itr!=mp.end();itr++)
    {
        if((*itr).second<2)
            return (*itr).first;
        
    }   
        
    return 0;
    }