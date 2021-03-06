//Minimize the heights

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
       if(arr[0]==arr[n-1]) return 0;
       else {
           
           int ans=arr[n-1]-arr[0];
           for(int i=1;i<n;i++){
                //if(arr[i]-k<0)continue;
           int tempmin = min(arr[0]+k, arr[i]-k);
           int tempmax = max(arr[n-1]-k, arr[i-1]+k);
           ans = min(ans, tempmax-tempmin);
           }
           
            return ans;
       }
          
    }
};

{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  