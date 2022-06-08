Naive Solution
Time Complexity : O(M * N) 
Auxiliary Space : O(M)


void bonacciseries(long n, int m) 
{ 
       int arr[m]={0};
       arr[n-1]=1;
       
       for(int i=n;i<m;i++){
           for(int j=i-n;j<i;j++){
               arr[i]+=arr[j];
           }
       }
       
       for (int i = 0; i < m; i++)
         cout << arr[i] << "  ";
}

/* optimised solution using sliding window
Time Complexity: O(M) 
Auxiliary Space: O(M) 
*/
void bonacciseries(long n, int m) 
{ 
       int arr[m]={0};
       arr[n-1]=1;
	   arr[n]=1
       
       for(int i=n+1;i<m;i++){
	        arr[i]=arr[n-1]-arr[i-n-1];
	   }
       
       for (int i = 0; i < m; i++)
         cout << arr[i] << "  ";
}


