/* Approch 1
Rotating an Array using two pointer approach
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
        int i=0,j=n-1;
        while(j!=i){
            swap(arr[j],arr[i]);
            j--;
        }
    }
    void leftRotate(int arr[], int n, int d) {
        // code here
       while(d--){
           rotateByOne(arr,n);
       }
        
    }
};

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