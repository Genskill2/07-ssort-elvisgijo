void swap_max(int arr[],int l,int n) { 
       
        int max =arr[n];
        int maxidx=n;
         for (int i = n; i < l; i++) {
                   if (arr[i] > max){ 
                         max = arr[i];
                         maxidx=i; 
                   }
                   }
             
                arr[maxidx]=arr[n];
                arr[n]=max;
         
}
 void ssort(int arr[],int l){
        for( int i=0;i<=l-1;i++){
                swap_max(arr,l,i);
             }
       }
                  
                              
