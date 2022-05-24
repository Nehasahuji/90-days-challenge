/* Approch 2
Rotating an Array using rotate array by 1
Time Complexity: O(n*d)
Space Complexity: O(1)
----------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void rotateByOne(int arr[],int n){
        int temp=arr[0];
        for(int i=0;i<n;i++){
            arr[i]=arr[i+1];
        }
        
        arr[n-1]=temp;
    }
    void leftRotate(int arr[], int n, int d) {
        // code here
       while(d--){
           rotateByOne(arr,n);
       }
        
    }
};

// 1 2 3 4 5



// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}


  // } Driver Code Ends