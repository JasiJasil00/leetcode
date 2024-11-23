bool isPalindrome(int x) {
    int *a= (int *)malloc(sizeof(int)*10);
    int count = 0;
    int front = 0;
    if(x < 0)return false;
    if(x == 0)return true;
    while(x != 0 ){
        a[count++]=x%10;
        x=x/10;
    }
    a=realloc(a,sizeof(int)*count);
    int rear = count-1;
    while(front < rear){
        if(a[front]!=a[rear])return false;
        front++;
        rear--;
    }
    return true;
}