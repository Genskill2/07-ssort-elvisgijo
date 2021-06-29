void swap_max(int arr[],int l,int n) { 
        int maxidx;
         for (i = n; i < l-1; i++) {
            maxidx=i;
            for (j = i+1; j < l; j++) {
                   if (arr[j] > arr[maxidx]) 
                         maxidx = j; 
                   }
                int t=arr[maxidx];
                arr[i]=arr[maxidx];
                arr[maxidx]=t;
         }
 void ssort(int arr[],int l){
        for( int i=0;i<=l-1;i++){
                swap_max(arr,l,i);
             }
       }
                  
                              
