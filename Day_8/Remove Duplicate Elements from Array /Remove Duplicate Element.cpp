/* Remove Duplicate Element
Time Complexity : O(n) 
Auxiliary Space : O(n)
*/

int remove_duplicate(int a[],int n){
        // code here
      int j=0;
      int temp[n];
      for(int i=0;i<n-1;i++){
          if(a[i]!=a[i+1]){
              temp[j++]=a[i];
          }
      }
      
      temp[j++]=a[n-1];
      
      for (int i = 0; i < j; i++)
        a[i] = temp[i];
 
      
      return j;
      
    }


/* Remove Duplicate Element
Time Complexity : O(n) 
Auxiliary Space : O(1)
*/

  int remove_duplicate(int a[],int n){
        // code here
      int j=0;
      for(int i=0;i<n-1;i++){
          if(a[i]!=a[i+1]){
              a[j++]=a[i];
          }
      }
      
      a[j++]=a[n-1];
     
      return j;
      
    }