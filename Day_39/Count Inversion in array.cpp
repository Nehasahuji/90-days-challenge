//Time Complexity O(n^2)
//Space complexity O(1
long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long count=0;
        for(long long i=0;i<N;i++){
            for(long long j=i+1;j<N;j++){
                if(arr[i]>arr[j])
                    count++;
            }
        }
        
        return count;
    }
	
//Time Complexity O(nlongn)
//Space complexity O(n)
 long long int countAndMerge(long long int arr[], long long int l, long long int m, long long int r)
{
    long long int n1=m-l+1, n2=r-m;
    long long int left[n1],right[n2];
    for(long long int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(long long int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    
    long long int res=0,i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            {arr[k++]=left[i++];}
        else{
            arr[k++]=right[j++];
            res=res+(n1-i);
        }
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];
    return res;
}

long long int countInv(long long int arr[], long long int l, long long int r)
{
    long long int res = 0;
    if (l<r) {
       
       long long int m = (r + l) / 2;
 
        res += countInv(arr, l, m);
        res += countInv(arr, m + 1, r);
        res += countAndMerge(arr, l, m , r);
    }
    return res;
}
  