 vector<float> nums;
        for(int i=0;i<nums1.size();i++){
            nums.push_back(nums1[i]);
        }
        
         for(int i=0;i<nums2.size();i++){
            nums.push_back(nums2[i]);
        }
        
        
        sort(nums.begin(),nums.end());
        
        if(nums.size()%2!=0)
        return nums[nums.size()/2];
        else
        {
            int mid=nums.size()/2;
            return (nums[mid-1]+nums[mid])/2;
        }
            
    }