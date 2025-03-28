// Your code here...
// Your code here...
int insertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){

            if(arr[mini]>arr[j]){
                mini=j;
              

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