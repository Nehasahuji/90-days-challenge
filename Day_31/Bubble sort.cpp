//Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until they are not in the intended order. 
/*
General solution of bubble sort
Time Complexity O(n^2)
Space Complexity O(1)
*/
void bubbleSort(int arr[], int n)
    {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1])
                 {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                 }
            }
        } 
    }
	
/*
Optimised solution of bubble sort
Time Complexity O(n^2) in best case it is O(n)
Space Complexity O(1)
*/
void bubbleSort(int arr[], int n)
    {
        for(int i=0;i<n-1;i++){
            bool swapped=true;
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1])
                 {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swapped=false;
                 }
            }
            
             if(swapped==true)
                    break;
        } 
    }