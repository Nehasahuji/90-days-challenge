/* Approch 4
Two Pointer Approach
Time Complexity: O(n)
Space Complexity: O(1);
----------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    nt left=0,right=n-1;
      while(left<=right){
          if(arr[left]>=0 && arr[right]>=0){
              left++;
          }else if(arr[left]<0 && arr[right]>0){
              swap(arr[left],arr[right]);
              left++;
              right--;
          }else if(arr[left]<0 && arr[right]<0){
              right--;
          }
      }



};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}