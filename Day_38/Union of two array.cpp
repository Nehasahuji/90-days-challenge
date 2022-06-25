// Time Complexity: O(m*n)(log(m+n))
// Space Complexity: O(m+n)
 
 int doUnion(int a[], int n, int b[], int m)  {
        //code here
        vector<int> res;
         int c[m+n];
        
        for(int i=0;i<n;i++){
           c[m+i]=a[i];
        }
        
        for(int i=0;i<m;i++){
            c[i]=b[i];
        }
        
        int count=1;
        
        sort(c,c+n+m);
        
        for(int i=1;i<n+m;i++){
            if(c[i-1]!=c[i])
                count++;
        }
        
        return count;
        
    }
	
   // Time Complexity: O(m+n)
   // Space Complexity: O(1)
	
   int doUnion(int a[], int n, int b[], int m)  {
        //code here
        vector<int> res;
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=0;
        while(i<n && j<m){
            if(i>0 && a[i-1]==a[i])
                {
                    i++;
                    continue;
                   
                }
            else if(j>0 && b[j-1]==b[j]){
                j++;
                continue;
               
            }
            else if(a[i]<b[j]){
                res.push_back(a[i]);
                i++;
            }else if(a[i]>b[j]){
                res.push_back(b[j]);
                j++;
            }else{
                res.push_back(a[i]);
                i++;
                j++;
            }
        }
        
        
        while(i<n){
          if(i==0||a[i]!=a[i-1])
             res.push_back(a[i]);
                i++;  
        }
        
        while(j<m){
            if(j==0||b[j]!=b[j-1])
             res.push_back(b[j]);
             j++;
        }
        
        return res.size();
        
    }
        
        
        while(i<n){
          res.push_back(a[i]);
                i++;  
        }
        
        while(j<m){
             res.push_back(b[j]);
             j++;
        }
        
        return res.size();
        
    }