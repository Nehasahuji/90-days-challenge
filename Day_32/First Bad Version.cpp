 //Binary search O(logn))
 int firstBadVersion(int n) {
       int start=1;
        int end=n;
        while(start<=end){
            long mid=start+(end-start)/2;
            if(isBadVersion(mid)==true){
               end=mid-1;
            }
            else if(isBadVersion(mid)==false){
                start=mid+1;
        }       
        }
        return start;
    }