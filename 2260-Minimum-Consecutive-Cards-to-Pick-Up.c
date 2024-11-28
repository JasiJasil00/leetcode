int minimumCardPickup(int* cards, int cardsSize) {
    int * a = (int *)calloc(1000001,sizeof(int));
    int start = 0;
    int min = 100003;
    for(int i =0 ; i < cardsSize ; i ++){
        if(a[cards[i]]>start){
            if(min > i - a[cards[i]] + 2){
                min = i - a[cards[i]] + 2;
            }
            start=a[cards[i]];
        }
        a[cards[i]]=i+1;
    }
    if(min == 100003)min = -1;
    return min;
}