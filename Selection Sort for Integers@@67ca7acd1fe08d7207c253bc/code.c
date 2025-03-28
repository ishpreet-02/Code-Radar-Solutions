// Your code here...
int selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i+1];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}