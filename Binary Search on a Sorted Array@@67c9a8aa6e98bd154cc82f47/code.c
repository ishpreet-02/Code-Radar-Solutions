// Your code here...

int binarySearch(int arr[];int n;int target){
    int low=0;
    int high =n-1;
    while(low<=high){
        int mid=low+(high-low);
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            low=mid+1;
        }
        if(arr[mid]>target){
            high=mid-1;

        }
    }
    return -1;
}