//Naive Solution
//Time Complexity :O(n)
// Space Complexity :O(n)
vector<int> temp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                temp.push_back(nums[i]);
            else
                count++;
        }
       
        while(count>0){
            temp.push_back(0);
            count--;
        }
        
        for(int i=0;i<temp.size();i++)
        {
            nums[i]=temp[i];
        }

//Efficient Solution
//Time Complexity :O(n)
// Space Complexity :O(1)	
		
 void moveZeroes(vector<int>& nums) {
       int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }