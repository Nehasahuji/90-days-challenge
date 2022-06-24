  //Naive Solution 
 int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        int count=0;
        
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(a[i]==b[j])
                        count++;
                }
        }
        
        return count;
    }
 //Efficient solution using merge function of merge sort
 int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        int count=0;
        
        int  i=0,j=0;
        sort(a,a+n);
        sort(b,b+m);
        
        while(i<n && j<m){
             if(a[i]==a[i-1] && i>0)
             {
                i++;
                continue;
             }
            if(a[i]==b[j])
            {
                i++;
                j++;
                count++;
            }else if(a[i]<b[j]){
                i++;
            }else{
                j++;
            }
        }
       
        return count;
    }