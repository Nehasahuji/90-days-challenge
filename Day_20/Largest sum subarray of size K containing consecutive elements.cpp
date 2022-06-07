/*Largest sum subarray of size K containing consecutive elements
Naive Solution
Time Complexity: O(n^2)
Space Complesity: O(1)
*/

int maxSumSubArrayContatiningKElement(int arr[],int n,int k){
    int maxSum=0;
    for(int i=0;i<n-k+1;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum=sum+arr[j];
        }
    maxSum=max(maxSum,sum);
    }
    return maxSum;
}

/*
Efficient Solution using sliding window technique
Time Complexity: O(n^2)
Space Complesity: O(1)
*/

int maxSumSubArrayContatiningKElement(int arr[],int n,int k){
    int maxSum=0;
    int sum=0;
    for(int i=0;i<k;i++){
        sum=sum+arr[i];
    }
    
    for(int i=k;i<n;i++){
        maxSum=max(sum,maxSum);
        sum=sum+arr[i]-arr[i-k] ;
    }
    
    return max(maxSum,sum);
}