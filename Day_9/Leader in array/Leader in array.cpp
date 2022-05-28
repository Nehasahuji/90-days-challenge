/* Leaders in an array
Time Complexity: O(n*n)
Space Complexity O(1)
*/
vector<int> leaders(int a[], int n){
        // Code here
        vector<int> res;
        for(int i=0;i<n;i++){
            int flag=1;
            for(int j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    flag=0;
                    break;
                }
            }
          
        if(flag==1)
          res.push_back(a[i]);
      }
        
        return res;
        
    }

/* Leaders in an array
Time Complexity: O(n)
Space Complexity O(1)
*/

vector<int> leaders(int a[], int n){
         
         vector<int> res;
         int leader=a[n-1];
         res.push_back(leader);
         
         for(int i=n-2;i>=0;i--){
             if(a[i]>=leader){
                leader=a[i];  
                res.push_back(leader);
                              
             }
         }
        reverse(res.begin(),res.end());
        
        return res; 
    }