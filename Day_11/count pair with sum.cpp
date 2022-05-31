/* count pair with sum
Time Complexity O(n^n)
Space Complexity O(1)
*/
int getPairsCount(int arr[], int n, int k) {
        // code here
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==k)
                    count++;
            }
        }
        
      return count;
        
}
