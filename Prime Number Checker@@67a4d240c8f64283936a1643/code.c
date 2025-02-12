// Your code here...
int isPrime(int n){
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                return 0;

            }
            else{
                return 1;
            }
        }
    }
}