/*Approch 3
count occurence of each element and then after modfy the array
Time Complexity: O(n)
Space Complexity: O(1);
----------------------------------
*/
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
       int count_0=0,count_1=0,count_2=0;
       for(int i=0;i<n;i++){
           a[i]==0?count_0++:a[i]==1?count_1++:count_2++;
       }
       
       int j=0;
       while(count_0>0){
           a[j++]=0;
           count_0--;
       }
       
       while(count_1>0){
           a[j++]=1;
           count_1--;
       }
       
        while(count_2>0){
           a[j++]=2;
           count_2--;
       }
       
       
       
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends