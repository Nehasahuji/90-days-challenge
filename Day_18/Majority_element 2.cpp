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