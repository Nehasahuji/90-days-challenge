Sort an array of 0s, 1s and 2 / 
75. Sort Colors
--------------------------------------

Approch 1
Using sort function
Time Complexity: O(nlogn)
Space Complexity: O(1)
----------------------------------

void sortColors(vector<int>& nums) {
     sort(nums.begin(),nums.end());
}

====================================================================================

Approch 2
Using an extra array
Time Complexity: O(n)
Space Complexity: O(n);
----------------------------------
void sortColors(vector<int>& nums) {
       vector<int> temp(nums.begin(),nums.end());
        
       nums.clear();
       for(int i=0;i<temp.size();i++){
           if(temp[i]==0){
              nums.push_back(0); 
           }
       }
        
       for(int i=0;i<temp.size();i++){
           if(temp[i]==1){
              nums.push_back(1); 
           }
       }
        
        for(int i=0;i<temp.size();i++){
           if(temp[i]==2){
              nums.push_back(2); 
           }
       }
}


====================================================================================

Approch 3
count occurence of each element and then after modfy the array
Time Complexity: O(n)
Space Complexity: O(1);
----------------------------------
 void sortColors(vector<int>& nums) {
     
    int count0=0,count1=0,count2=0;
  
    for(int itr=0;itr<nums.size();itr++){
        nums[itr]==0?count0++:nums[itr]==1?count1++:count2++;
    }

    nums.clear();
    
    while(count0>0){
        nums.push_back(0);
        count0--;
    }
        
    while(count1>0){
        nums.push_back(1);
        count1--;
    }
        
    while(count2>0){
        nums.push_back(2);
        count2--;
    }
        
    }

====================================================================================

Approch 4
Three Pointer Approch
Time Complexity: O(n)
Space Complexity: O(1);
----------------------------------
 void sortColors(vector<int>& nums) {
    
    int low=0,mid=0,high=nums.size()-1;
  
    while(mid<=high){
       if(nums[mid]==0){
           swap(nums[mid++],nums[low++]);
       }else if(nums[mid]==1){
           mid++;
       }else{
           swap(nums[mid],nums[high--]);
       }
     }
   }