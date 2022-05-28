Find maximum and minimum from an array
--------------------------------------

Approch 1
Using sort function
Time Complexity: O(nlogn)
----------------------------------

pair<long long, long long> getMinMax(long long a[], int n) {
     
     sort(a,a+n); // sort funtion 
     long long max=a[n-1];
     long long min=a[0];
     
     //return values by making a pair
    return make_pair(min,max);
  
}


Approch 2
Iterative method
Time Complexity: O(n)
-----------------------------------

pair<long long, long long> getMinMax(long long a[], int n) {
     
     long long max;
     long long min;
     
     
     if(a[0]>a[1]){
         max=a[0];
         min=a[1];
     }else{
        max=a[1];
        min=a[0]; 
     }
     
     for(int i=2;i<n;i++){
         if(a[i]>max){
             max=a[i];
         }else if(a[i]<min){
             min=a[i];
         }
     }
     
    return make_pair(min,max);
  
}


Approch 3
Compare in pair
Time Complexity: O(n)
-----------------------------------

pair<long long, long long> getMinMax(long long a[], int n) {
     
     long long max;
     long long min;
     int i=0;
     if(n%2==0){
        if(a[0]>a[1]){
           max=a[0];
           min=a[1];
       }else{
           max=a[1];
           min=a[0]; 
       }
       i=2;
     }else{
         max=a[0];
         min=a[0];
         i=1;
     }
     
     while(i<n-1){
         if(a[i]>a[i+1]){
             if(a[i]>max){
                 max=a[i];
             }
             
             if(a[i+1]<min){
                 min=a[i+1];
             }
         }else{
             if(a[i+1]>max){
                 max=a[i+1];
             }
             
             if(a[i]<min){
                 min=a[i];
             }
             
         }
         
         i=i+2;
     }
     
    return make_pair(min,max);
  
}
