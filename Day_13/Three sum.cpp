 /* Three sum 
 Naive Solution 
 Time Complexity O(n^3)
 Space Complexity O(1)
 */

 vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        if(nums.size()<=2) return res;
        for(int i=0;i<nums.size();i++){
            vector<int> temp;
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                   if(nums[i]+nums[j]+nums[k]==0){
                       temp.push_back(nums[i]);
                       temp.push_back(nums[j]);
                       temp.push_back(nums[k]);
                       res.push_back(temp);
                       temp.clear();
                   }
                 while(k!=nums.size()-1 && nums[k]==nums[k+1])k++;
                }
            while(j!=nums.size()-1 && nums[j]==nums[j+1])j++;
            }
          while(i!=nums.size()-1 && nums[i]==nums[i+1])i++;
        }
        
        return res;
    }


 /* Three sum 
 Efficient Solution 
 Time Complexity O(n^2)
 Space Complexity O(1)
 */

 vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()<=2) return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){ //iterate in each element
          int left=i+1;
          int right=nums.size()-1;
          while(left<right){
              if((nums[i]+nums[left]+nums[right])==0){
                  
                  res.push_back({nums[i],nums[left],nums[right]});
                   while(left!=nums.size()-1 && nums[left]==nums[left+1]) left++;
                  while(right!=0 && nums[right]==nums[right-1]) right--;
                  left++;
                  right--;
                 
              }else if((nums[i]+nums[left]+nums[right])>0){ 
                  while(right!=0 && nums[right]==nums[right-1]) right--;
                  right--;
                  
              }else{
                  while(left!=nums.size()-1 && nums[left]==nums[left+1]) left++;
                  left++;
                
              }
          }
        while(i!=nums.size()-1 && nums[i]==nums[i+1]) i++;
        }
        
        return res;
    }
