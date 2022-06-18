 //Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list.
 void selectionSort(int arr[], int n)
    {
       for(int i=0;i<n;i++){
             int min = i;
             for(int j=i+1;j<n;j++)
             if(arr[j]<arr[min])
             min = j;
             swap(&arr[min],&arr[i]);
       }
    }