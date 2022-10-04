int vasarlas(int arr[], int len, int max) {
    int rem = 0;
    for(int i=0; i<len; i++) {
        if(arr[i]>max) {
            rem+=arr[i];
            for(int j=i; j<len-1; j++) arr[j] = arr[j+1];
            arr[len-1] = 0;
            i=-1;
        }
    }
    return rem;
}