/*
 Naive Solution
 Time Complexity O(n)
*/ 
 char nextGreatestLetter(vector<char>& letters, char target) {
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target)
                return letters[i];
        }
        
        return letters[0];
    }
	
/*
Efficient Solution using Binary search
Time Complexity O(logn)
*/

 int low=0;
        int high=letters.size()-1;
        int res=0;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(letters[mid]<=target)
                 low=mid+1;
            else {
                high=mid-1;
                res=mid;
            }
        }
        
        return letters[res];
    }
	
	