// Your code here...
int selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){

            if(arr[mini]>arr[j]){
                int mini=j;
              

            }
        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}