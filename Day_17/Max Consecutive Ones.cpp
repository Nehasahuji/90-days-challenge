/*Max Consecutive Ones
Time Compeixty O(n)
Space complexity O(1)
*/  
int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ++count;
            }else{
               if(maxCount<count)
               {
                    maxCount=count;
               }
                
                count=0;
            
            }
        }
        
        return  max(maxCount,count);
    }