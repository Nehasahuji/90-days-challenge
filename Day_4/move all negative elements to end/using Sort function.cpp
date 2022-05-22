/*Approch 1
Sort an array
Time Complexity: O(n)
Space Complexity: O(n);
----------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
{
      
      int nums[n]; 
      for(int i=0;i<n;i++){
          nums[i]=arr[i];
      }
        
      int j=0;
      for(int i=0;i<n;i++){
          if(nums[i]>=0){
              arr[j]=nums[i];
              j++;
          }
      }
        
      for(int i=0;i<n;i++){
        if(nums[i]<0){
          arr[j]=nums[i];
              j++;
          }
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
  // } Driver Code Ends