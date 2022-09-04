/*Naive Solution
Time Complexity O(n^2)
Space Complexity O(1)
*/
vector<int> productExceptSelf(vector<int>& nums) {
       
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int product=1;
            for(int j=0;j<nums.size();j++){
                if(j!=i){
                   product=product*nums[j]; 
                }
            }
            
            res.push_back(product);
        }
        return res;
    }
/*Efficient Solution
Time Complexity O(n)
Space Complexity O(n)
*/

    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> left_Product(n);
        vector<int> right_Product(n);
        
        left_Product[0] = 1;
        for(int i = 1; i < nums.size(); i++){
            left_Product[i] = left_Product[i - 1] * nums[i - 1];
        }
        
        right_Product[n - 1] = 1;
        for (int j = n - 2; j >= 0; j--) {
            right_Product[j] = right_Product[j + 1] * nums[j + 1];
        }
        
        for (int k = 0; k < n; k++) {
            ans[k]= left_Product[k] * right_Product[k];
        }
        
        return ans;
    }