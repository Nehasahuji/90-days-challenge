/* Maximum Difference Between Increasing Elements
Approch 1 :
Time Complexity : O(n^2) 
Auxiliary Space : O(1)
*/
int maximumDifference(vector<int>& nums) {
        int max = -1;
        for(int i=0;i<nums.size();i++)
            for(int j=i+1;j<nums.size();j++){
                if((nums[j]-nums[i])>max){
                    max=nums[j]-nums[i];
                }
            }
        if(max==0)
            return -1;
        else
            return max;
}

/* 
Approch 2: 
Time Complexity : O(n) 
Auxiliary Space : O(1)
*/

int maximumDifference(vector<int>& nums) {
       int minElement=nums[0];
       int maxDiff=nums[1]-nums[0];
       
       for(int i=1;i<nums.size();i++){
           if((nums[i]-minElement)>maxDiff)
               maxDiff=nums[i]-minElement;
           
           if(nums[i]<minElement){
               minElement=nums[i];
           }
       }
        
        if(maxDiff<1)
            return -1;
        else
            return maxDiff; 
    }

/* Approch 3: 
Time Complexity : O(n) 
Auxiliary Space : O(1)
*/


int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int maxRight=nums[n-1];
        
        int maxDiff=-1;
        
        for(int i=n-2;i>=0;i--){
            if(nums[i]>maxRight){
                maxRight=nums[i];
            }
            
            if((maxRight-nums[i])>maxDiff){
                maxDiff=maxRight-nums[i];
            }
        }
        
         if(maxDiff<1)
            return -1;
        else
            return maxDiff; 
    }

Approch 4:
/*
Time Complexity : O(n) 
Auxiliary Space : O(1)
*/
int maximumDifference(vector<int>& nums) {
            int diff = nums[1]-nums[0];
            int curr_sum = diff;
            int max_sum = curr_sum;
            int n=nums.size();

            for(int i=1; i<n-1; i++)
            {
                // Calculate current diff
                diff = nums[i+1]-nums[i];

                // Calculate current sum
                if (curr_sum > 0)
                curr_sum += diff;
                else
                curr_sum = diff;

                // Update max sum, if needed
                if (curr_sum > max_sum)
                max_sum = curr_sum;
            }

            if(max_sum<1){
                return -1;
            }
            else
            {
            return max_sum;
            }
       }