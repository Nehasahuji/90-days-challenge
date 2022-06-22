//Naive solution
 void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int itr=0,jtr=0;
            
            while(itr<n && jtr<m){
                if(arr1[itr]>=arr2[jtr] && itr<n && itr<m){
                    swap(arr1[itr],arr2[jtr]);
                    sort(arr1,arr1+n);
                    sort(arr2,arr2+m);
                    itr++;
                }else if(arr1[itr]<arr2[jtr]){
                    jtr++;
                }
            }
            
  } 

//Efficeient sollution
void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
          
            int i=0,j=0,k=n-1;
            while(i<=k && j <m){
                if(arr1[i]>=arr2[j]){
                    swap(arr2[j],arr1[k]);
                    j++;
                    k--;
                }
                else{
                    i++;
                }
            }
            
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
            
        } 