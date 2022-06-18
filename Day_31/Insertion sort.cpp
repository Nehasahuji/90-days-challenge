//Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration. Insertion sort works similarly as we sort cards in our hand in a card game. We assume that the first card is already sorted then, we select an unsorted card.
void insertionSort(int arr[], int n)
    {
       for(int i=1;i<n;i++){
           int key=arr[i];
           int j=i-1;
           while(j>=0 && arr[j]>key){
               arr[j+1]=arr[j];
               j--;
           }
           
           arr[j+1]=key;
       }
    }