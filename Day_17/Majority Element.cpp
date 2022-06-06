/* Approach 1: Naive Solution
Time complexity : O(n^2)
The brute force algorithm contains two nested for loops that each run for nn iterations, adding up to quadratic time complexity.
Space complexity : O(1)O(1)
The brute force solution does not allocate additional space proportional to the input size.
*/

int majorityElement(int a[], int size)
    {
        for(int i=0;i<size;i++){
            int count=1;
            for(int j=i+1;j<size;j++){
                if(a[i]==a[j])
                    count++;
            }
            if(count>size/2)
                return a[i];
        }
      
      return -1;  
    }
/*
/*
Approach 3: Sorting the array	
Time complexity : O(nlongn)
Space complexity : O(1)
*/

int majorityElement(int a[], int size)
    {
      sort(a,a+size);
      
      int count=0;
      for(int i=0;i<size;i++){
          if(a[i]==a[size/2])
            count++;
      }
      
      if(count>(size/2))
            return a[size/2];
      else
            return -1;
    }
/*
Approach 3: HashMap	
Time complexity : O(n)
We iterate over nums once and make a constant time HashMap insertion on each iteration. Therefore, the algorithm runs in O(n)time.
Space complexity : O(n)
we are using map 
*/
int majorityElement(int a[], int size)
{
map<int,int> mp;
      
      for(int i=0;i<size;i++){
          mp[a[i]]++;
      }
      
      for(auto itr=mp.begin();itr!=mp.end();itr++){
          if((*itr).second > size/2){
            return (*itr).first;   
          }
      }
      
      return -1;
}


