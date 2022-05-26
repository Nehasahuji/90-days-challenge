/*Simple Solution 
Time Complexity: O(n log n). 
Time required to sort the array is O(n log n).
Auxiliary space: O(1). 
As no extra space is required.
*/
vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
      
         vector<int> res;
         
         sort(arr,arr+sizeOfArray);
         
         max = arr[sizeOfArray-1];
         
         for(int i=sizeOfArray-2;i>=0;i--){
               if(arr[i]!=max){
                   max2=arr[i];
                   break;
               }
         }
         
       
         
         if(max2==INT_MIN){
             res.push_back(max);
             res.push_back(-1);
             return res;
         }else{
             res.push_back(max);
             res.push_back(max2);
         }
    }


/*
Better Solution: 
Time Complexity: O(n). 
Two traversals of the array is needed.
Auxiliary space: O(1). 
As no extra space is required
*/
vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
      
         vector<int> res;
         
         for(int i=0;i<sizeOfArray;i++){
             if(arr[i]>max){
                 max=arr[i];
             }
         }
         
         for(int i=0;i<sizeOfArray;i++){
             if(arr[i]<max && arr[i]>max2){
                 max2=arr[i];
             }
         }
         
         if(max2==INT_MIN){
             res.push_back(max);
             res.push_back(-1);
             return res;
         }else{
             res.push_back(max);
             res.push_back(max2);
         }
    }

/*Efficient Solution 
Time Complexity: O(n). 
Only one traversal of the array is needed.
Auxiliary space: O(1). 
As no extra space is required.
*/

    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
      
         vector<int> res;
         
         for(int i=0;i<sizeOfArray;i++){
             if(arr[i]>max){
                 if(max>max2){
                     max2=max;
                 }
                 max=arr[i];
             }else if(arr[i]>max2 && arr[i]<max){
                 max2=arr[i];
             }
         }
         
         if(max2==INT_MIN){
             res.push_back(max);
             res.push_back(-1);
             return res;
         }else{
             res.push_back(max);
             res.push_back(max2);
         }
    }