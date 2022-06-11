/* Approach 1 HashMap	
Time complexity : O(n)
We iterate over nums once and make a constant time HashMap insertion on each iteration. Therefore, the algorithm runs in O(n)time.
Space complexity : O(n)
we are using map 
*/
 
 vector<int> majorityElement(vector<int>& nums) {
       map<int,int> mp;
       int n=nums.size();
       vector<int> res;
       for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
       }
    
        
       for(auto itr=mp.begin();itr!=mp.end();itr++){
           if((*itr).second>n/3){
               res.push_back((*itr).first);
           }
       }
        
        return res;
    }
    
/*
Approach 4: using Using Moore’s Voting Algorithm	
Time complexity : O(n)
Space complexity : O(1)
*/  
int sz = nums.size();
        int num1 = -1, num2 = -1, count1 = 0, count2 = 0, i;
        for (i = 0; i < sz; i++)
        {
            if (nums[i] == num1)
                count1++;
            else if (nums[i] == num2)
                count2++;
            else if (count1 == 0)
            {
                num1 = nums[i];
                count1 = 1;
            }    
            else if (count2 == 0)
            {
                num2 = nums[i];
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        count1 = count2 = 0;
        for (i = 0; i < sz; i++)
        {
            if (nums[i] == num1)
                count1++;
            else if (nums[i] == num2)
                count2++;
        }
        if (count1 > sz/3)
            ans.push_back(num1);
        if (count2 > sz/3)
            ans.push_back(num2);
        return ans;
    }
