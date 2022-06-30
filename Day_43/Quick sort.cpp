//Using Lomuto partition
void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high)
        {
            int p=partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
        }
        
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int pivot=arr[high];
        int itr=low-1;
        for(int jtr=low;jtr<high;jtr++){
            if(arr[jtr]<pivot)
            {
                itr++;
                swap(arr[itr],arr[jtr]);
            }
            
        }
        
        swap(arr[itr+1],arr[high]);
        return itr+1;
    }

//using hoare partition
 void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high){
         int p = partition(arr,low,high);
         quickSort(arr,low,p);
         quickSort(arr,p+1,high);
        }
    }
    
    public:
    int partition (int arr[], int l, int h)
    {
        int pivot=arr[l];
        int i=l-1,j=h+1;
        while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i],arr[j]);
    }
    }