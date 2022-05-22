/* Approch 3
 partition process of quicksort. 
Time Complexity: O(n)
Space Complexity: O(1);
----------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
      
      int itr=0;
      for(int jtr=0;jtr<n;jtr++){
          if(arr[jtr]>0){
              if(itr!=jtr)
              swap(arr[itr],arr[jtr]);
              itr++;
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