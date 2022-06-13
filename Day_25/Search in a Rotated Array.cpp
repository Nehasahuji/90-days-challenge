/* Naive Solution
   Linear Search
   Time Complexity O(n)
   Space Compleixty O(1)
*/
int search(int a[], int l, int h, int key){
    //complete the function here
    for(int itr=l;itr<=h;itr++){
        if(a[itr]==key)
            return itr;
    }
    return -1;
    }
/* 
   Efficient Solution
   Binary Search
   Time Complexity O(logn)
   Space Compleixty O(1)
*/

int search(int a[], int low, int high, int key){
    //complete the function here
      while(low<=high){
          int mid=(low+high)/2;
          
          if(a[mid]==key){
              return mid;
          }else if(a[low]<a[mid]){
              if(key>=a[low] && key<a[mid])
                    high=mid-1;
                else
                    low=mid+1;
          }else{
               if(key<=a[high] && key>a[mid])
                    low=mid+1;
                else
                    high=mid-1;
          }
      }
      
      return -1;
   
    }