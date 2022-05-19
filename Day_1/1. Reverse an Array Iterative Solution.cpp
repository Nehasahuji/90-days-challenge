void reverseArray(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void printArray(int arr[],int n){
    for(int itr=0;itr<n;itr++){
	        cout << arr[itr] << " ";
     }
}


int main()
 {
	int T;
	cin >> T;

	while(T--){
	    int N;
	    cin >> N;
	  
	    int arr[N];
	    
	    for(int itr=0;itr<N;itr++){
	        cin >> arr[itr];
	    }
	    
	   reverseArray(arr,N);
	    
	   printArray(arr,N);
	    
	   cout <<endl;
	}
	return 0;
}