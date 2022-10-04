void primszamGenerator(int arr[], int len) {
    int n = 1;
    int i = 0;
    while(i<len) {
        n++;
        int prime = 1;
        for(int n2=2; n2<n; n2++) {
            if(n%n2==0) {
                prime = 0;
                break;
            }
        }
        if(prime) {
            arr[i]=n;
            i++;
        }
    }
}