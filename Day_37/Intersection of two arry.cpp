 //usimg vector
 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> temp;
        vector<int> res;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int i=0,j=0,k=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                 temp.insert(nums1[i]);
                i++;
                j++;
            }else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }
        }
        
         res.assign(temp.begin(), temp.end());
        
        return res;
    }

//using merge sort
 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int> res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(i>0 && nums1[i]==nums1[i-1]){
                i++;
            }
            
            else if(nums1[i]==nums2[j]){
                res.push_back(nums1[i]);
                i++;
                j++;
            }else if(nums1[i]>nums2[j]){
                j++;
            }else{
                i++;
            }
        }
        
        return res;
    }