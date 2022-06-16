  /*
 Naive Solution
 Time Complexity O(n)
 */ 
 int peakIndexInMountainArray(vector<int>& arr) {
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
                return i;
        }
        
        return -1;
    }
     }
	
/*
 Efficient Solution using Binary search
Time Complexity O(logn)
*/	
 int peakIndexInMountainArray(vector<int>& arr) {
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
                return i;
        }
        
        return -1;
    }