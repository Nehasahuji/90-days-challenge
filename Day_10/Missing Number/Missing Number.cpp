/* Missing Number
Time Complexity : O(nlog(n))
Space Complexity :O(1)
*/
int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
        }
        
        return nums.size();
    }
/*
Time Complexity : O(n)
Space Complexity :O(1)
*/

int missingNumber(vector<int>& nums) {
        
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int add=0;
        for(int i=0;i<nums.size();i++){
            add+=nums[i];
        }
        
        return sum-add;
}