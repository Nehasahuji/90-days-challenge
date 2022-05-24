/* Approch 2
Program to cyclically rotate an array by one using two pointer approach
Time Complexity: O(n)
Space Complexity: O(1)
----------------------------------
*/

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends


//User function Template for C++


void rotate(int arr[], int n)
{   
    int i=0,j=n-1;
    while(i!=j){
        swap(arr[i],arr[j]);
        i++;
    }
     
}





