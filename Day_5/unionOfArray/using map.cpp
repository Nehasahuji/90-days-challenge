/*Approch 2
Union of two array Using Map
Time Complexity: OO(m+n).
Space Complexity: O(m+n);
----------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

 class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        
     map<int,int> mp;

     for(int i=0;i<n;i++){
         mp.insert({a[i],i});
     }
     
     for(int i=0;i<m;i++){
         mp.insert({b[i],i});
     }
     
    return mp.size();
    }
};

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}