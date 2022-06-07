 /* Subarray with given sum
    Time Complexity: O(n^2)	
	Space complexity : O(1)
  */
 vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> res;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
            
             if(sum==s)
              {   res.push_back(i+1);
                  res.push_back(j+1);
                  return res;
              }
        }
     }
        
       return res;
    }