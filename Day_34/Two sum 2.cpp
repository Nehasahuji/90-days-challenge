 vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
        
        for(int i=0;i<numbers.size();i++){
            for(int j=i+1;j<numbers.size();j++){
                if(numbers[i]+numbers[j]==target){
                    res.push_back(i+1);
                    res.push_back(j+1);
                    return res;
                }
            }
        }
        
        return res;
		
 }
 vector<int> twoSum(vector<int>& nums, int target) {
	
	vector<int> res;
        
        for(int i=0;i<numbers.size();i++){
            for(int j=i+1;j<numbers.size();j++){
                if(numbers[i]==target-numbers[j]){
                    res.push_back(i+1);
                    res.push_back(j+1);
                    return res;
                }
            }
        }
        
        return res;
		
 }