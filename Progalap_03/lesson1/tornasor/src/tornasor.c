int torna(int heights[], int len) {
    for(int i=0; i<len-1; ++i) {  // bubble sort
        for(int j=0; j<len-i-1; ++j) {
            if(heights[j]>heights[j+1]) {
                int tmp = heights[j];
                heights[j] = heights[j+1];
                heights[j+1] = tmp;
            }
        }
    }
    return len%2==0 ? (heights[len/2]+heights[len/2-1])/2 : heights[len/2];
}
